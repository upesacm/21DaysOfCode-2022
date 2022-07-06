import numpy as np
import pandas as pd
from sklearn import neighbors, metrics
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder

data = pd.read_csv('D:\Codes\Python codes\scikit_learn\knn_classifier\car.data')
#print(data.head())

X = data[[
    'buying',
    'maint',
    'safety'
]].values
Y = data[['class']]
#print(X,Y)

#converting string data to machine readable form
#X
Le = LabelEncoder()
for i in range(len(X[0])):
    X[:, i] = Le.fit_transform(X[:, i])
#print(X)

#converting string data to machine readable form/method 2
#Y
label_mapping = {
    'unacc':0,
    'acc':1,
    'good':2,
    'vgood':3
}
Y['class'] = Y['class'].map(label_mapping)
Y = np.array(Y)
#print(Y)

#creating model

knn = neighbors.KNeighborsClassifier(n_neighbors=25, weights='uniform')
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)
knn.fit(X_train, Y_train)
prediction = knn.predict(X_test)
accuracy = metrics.accuracy_score(Y_test, prediction)
print('predictions: ', prediction)
print('accuracy: ', accuracy)

a = 15
print('actual value: ', Y[a])
print('predicted value: ', knn.predict(X)[a])