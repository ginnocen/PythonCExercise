#concept of zipping two lists.
#when I zip two lists, i match the entries of one list with the entries of the other list.
#the output of the zip command is a list ot tuple with 2 elements each. 
#
#
randomvalues = [1,2,3,4,5]
probabilities = [0.1, 0.2, 0.56, 0.8, 0.4]
mylist=zip(randomvalues,probabilities)

#another simple exercise of list
listrange=range(len(randomvalues))
myzip=zip(range(len(randomvalues)), probabilities)
mylistzip=list(zip(range(len(randomvalues)), probabilities))


#print (myzip[0])
print (mylistzip[0])

#print listzip