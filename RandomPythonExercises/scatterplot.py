import numpy as np
import matplotlib.pyplot as plt

np.random.seed(0)
x = np.random.standard_normal(10000)
np.random.seed(500)
y = np.random.standard_normal(10000)
plt.figure(figsize=(7, 5))
plt.plot(x,y, 'go')
plt.grid(False)
plt.xlabel('1st')
plt.ylabel('2nd')
plt.title('Scatter Plot')
print x
plt.show()
