def fib(n):
  result = []
  a,b = 0,1 
  while a<n:
    #print 'value of a',a
    result.append(a)
    a, b = b, a+b   
    return result 
    
fib10=fib(100)
print fib10
