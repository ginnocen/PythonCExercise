import numpy as np
import matplotlib.pyplot as plt

x=np.random.seed(0)
x=np.random.standard_normal(10000)

y=np.random.seed(0)
y=np.random.standard_normal(10000)

#plt.plot(x,y,'ro')
#plt.show()

X = np.vstack((x,y))
print np.cov(X)