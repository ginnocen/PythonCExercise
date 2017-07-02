# make a lambda function that converts from celsius to farhenait
# the conversion function is (float(9)/5)*T + 32
celsius=[0,5,5,10,15,20,25,30,35,40]

def farhenait(T):
	return (float(9)/5)*T + 32

'''
print "map with lambda function", map(lambda T: (float(9)/5)*T + 32, celsius)
print "map without lambda function" , map(farhenait,celsius)
'''

a=map(lambda x : x*2, range(1,10))
b= [x*2 for x in range (1,11)]
