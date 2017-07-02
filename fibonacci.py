def fibonacci(n_values):
  array=[1,1]
  for i in range(2,n_values):
    array.append(array[i-1]+array[i-2])
  print array
  
fibonacci(100)

