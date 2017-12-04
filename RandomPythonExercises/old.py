import numpy as np
import matplotlib as mpl
import matplotlib.pyplot as plt

## we need some data to be plotted. first we set a seed and later 
## we generate 20 pseudo random numbers as a Numpy array

np.random.seed(500)
y = np.random.standard_normal(20)

x = range(len(y))
plt.plot(y.cumsum())
plt.grid(True) # adds a grid
plt.axis('tight') # adjusts the axis ranges
plt.xlim(-1, 20)
plt.xlabel('index')
plt.ylabel('value')
plt.title('A Simple Plot')
plt.plot(y.cumsum(), 'b', lw=3) #line width
plt.plot(y.cumsum(), 'ro') # draw red point
plt.show()
