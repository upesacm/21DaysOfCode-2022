from statistics import linear_regression
from sklearn import datasets
from sklearn import linear_model
from sklearn.model_selection import train_test_split
from matplotlib import pyplot as plt

boston = datasets.load_boston()

#splitting into features and labels
X = boston.data
Y = boston.target

#print("X")
#print(X)
#print(X.shape)
#print("Y")
#print(Y)
#print(Y.shape)

#algorithm
l_reg = linear_model.LinearRegression()

#visualising the data
plt.scatter(X.T[5], Y)
plt.show()

#train test split
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)

#training
model = l_reg.fit(X_train, Y_train)
predictions = model.predict(X_test)
print('Predictions: ', predictions)
print('R^2 value: ', l_reg.score(X, Y))
print("Coefficient: ", l_reg.coef_)
print("Intercept: ", l_reg.intercept_)