import numpy as np
import matplotlib.pyplot as plt

np.random.seed(2000)
y = np.random.standard_normal((20, 2)).cumsum(axis=0)
#what is this line doing.
#it creates a array of 20x2 of random variables according to a standard gaussian distribution
print y.shape

plt.figure(figsize=(7, 4))
plt.plot(y[:, 0], lw=1.5, label='1st')
plt.plot(y[:, 1], lw=1.5, label='2nd')
#plt.plot(y, 'ro')
plt.grid(True)
plt.legend(loc=0)
plt.axis('tight')
plt.xlabel('index')
plt.ylabel('value')
plt.title('A Simple Plot')
plt.show()