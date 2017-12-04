# This is a simple script to valuate the price of an European call option
# in Black-Scholes Merton model

# first of all we need to import numpy
import numpy as np
import matplotlib.pyplot as plt

# parameter values
S0=100.    # initial stock level 
K=105.     # strike price of the European call option 
T=1.0      # time to maturity
r=0.05     # constant riskless short rate
sigma=0.2  # volatility 

I = 1000000 # number of simulations
z=np.random.standard_normal(I)
ST=S0*np.exp((r-0.5*sigma**2)*T+sigma*np.sqrt(T)*z)
hT = np.maximum(ST - K, 0) # inner values at maturity
C0 = np.exp(-r * T) * np.sum(hT) / I # Monte Carlo estimator

fig1 = plt.figure()
ax1 = fig1.add_subplot(221)
n1, bins, patches = ax1.hist(z,facecolor='green',bins=100, normed=1)
ax1.set_xlabel('z variables')
ax1.set_ylabel('Entries')
ax1.set_title('Standard distribution of variable z')

ax2 = fig1.add_subplot(222)
n2, bins, patches = ax2.hist(ST,facecolor='green',bins=100, normed=1)
ax2.set_xlabel('St variables')
ax2.set_ylabel('Entries')
ax2.set_title('Distribution of variable St')

ax3 = fig1.add_subplot(223)
n3, bins, patches = ax3.hist(hT,facecolor='green',bins=1000, normed=1)
ax3.set_xlabel('ht variables')
ax3.set_ylabel('Entries')
ax3.set_title('Distribution of variable ht')
plt.savefig('histogram.png')
data = zip(*np.histogram(n1))

#np.savetxt('test.txt', n1, delimiter=',')
#data = np.loadtxt('test.txt')
#print data