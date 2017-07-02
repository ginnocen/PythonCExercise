_cumprobabilities=[0.2,0.4,0.6,1.0]
_numtuple = list(zip(range(len(_cumprobabilities)), _cumprobabilities))
print _numtuple




rnd=0.03
a=list(filter(lambda x: rnd <= x[1],_numtuple))
print list

_random_nums= [1,2,3,4]


counts = dict(zip(_random_nums, [0]*len(_random_nums)))
print counts
print counts[1]
counts[1]=counts[1]+1
print counts[1]
