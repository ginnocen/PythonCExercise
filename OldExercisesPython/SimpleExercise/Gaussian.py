#!/usr/bin/env python
import numpy as np
import matplotlib.mlab as mlab
import matplotlib.pyplot as plt

mu, sigma = 100, 15
x = mu + sigma*np.random.randn(1000000)

for i in range(len(x)):
  print 'random variable extracted from gaussian', x[i]

# the histogram of the data
# n is the number of counts in each bin of the histogram
# bins is the left hedge of each bin 
# patches is the individual patches used to create the histogram, e.g. the collection of rectangles.

n, bins, patches = plt.hist(x, bins=100, normed=1, facecolor='green', alpha=0.75)
plt.setp(patches[3],facecolor='red')

# add a 'best fit' line
plt.xlabel('Variable')
plt.ylabel('Probability')
plt.title(r'$\mathrm{Histogram\ of\ IQ:}\ \mu=100,\ \sigma=15$')
#plt.axis([40, 160, 0, 0.03])
plt.axis([0,200,0.,0.03])
plt.grid(True)
plt.show()