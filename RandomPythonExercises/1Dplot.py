import numpy as np 
import matplotlib.pyplot as plt

np.random.seed(500)
y=np.random.standard_normal(20)

x=range(len(y))
plt.plot(x,y,'b',lw=3)
plt.plot(x,y,'ro')
plt.plot(x,y,'ro')
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.title('This is a nice histogram')
plt.show()




