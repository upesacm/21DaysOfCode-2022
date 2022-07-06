from sklearn import datasets
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn import svm
iris = datasets.load_iris()
from sklearn.metrics import accuracy_score
#splitting in features and labels
X = iris.data
Y = iris.target

#creating a list to keep track of all the possible classes
classes = ['Iris Setosa', 'Iris Versicolour', 'Iris Virginica']

print(X.shape)
print(Y.shape)

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)

model = svm.SVC()
model.fit(X_train, Y_train)
print(model)

predictions = model.predict(X_test)
accuracy = accuracy_score(Y_test, predictions)

print('predictions: ', predictions)
print('actual: ', Y_test)
print('accuracy: ', accuracy)

for i in range(len(predictions)):
    print(classes[predictions[i]])