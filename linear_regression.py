import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn import datasets, linear_model
from sklearn.metrics import mean_squared_error, r2_score


nextractions=100
x = np.random.uniform(0,10,nextractions)
y=3*x+np.random.normal(0,1,nextractions)+5
plt.subplot(1, 2, 1)
n, bins, patches = plt.hist(x, 100, normed=1, facecolor='r')
plt.xlabel('x values')
plt.ylabel('Probability')
plt.title('Distribution of the independent variable')
plt.axis([0, 10, 0, 1])
plt.grid(True)
plt.subplot(1, 2, 2)
plt.scatter(x,y)

X_train = x[:-20]
Y_train = y[:-20]
X_train_matrix=map(lambda x: [x],X_train)

X_test = x[-20:]
Y_test = y[-20:]
X_test_matrix=map(lambda x: [x],X_test)


regr = linear_model.LinearRegression()
# Train the model using the training sets
regr.fit(X_train_matrix, Y_train)
# Make predictions using the testing set
Y_pred = regr.predict(X_test_matrix)
#print Y_pred
#print Y_test
#print regr.coef_
#print regr.intercept_

average_x=sum(X_train)/len(X_train)
average_y=sum(Y_train)/len(Y_train)
coefficient=sum([(X_train[i]-average_x)*(Y_train[i]-average_y) for i in range(len(X_train))])/sum([(X_train[i]-average_x)*(X_train[i]-average_x) for i in range(len(X_train))])
intercept=average_y-coefficient*average_x

#print coefficient
#print intercept

########### test the r-value of the linear fit ###########
average_y_pred=sum(Y_pred)/len(Y_pred)

SStot=sum([(Y_test[i]-average_y_pred)*(Y_test[i]-average_y) for i in range(len(Y_test))])
SSres=sum([(Y_test[i]-Y_pred[i])*(Y_test[i]-Y_pred[i]) for i in range(len(Y_test))])
Rvalue=1-SSres/SStot
print Rvalue
print('Variance score: %.2f' % r2_score(Y_test, Y_pred))