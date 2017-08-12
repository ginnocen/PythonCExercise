a=100
import random
lin=random.sample(range(1, a), 9)
print lin
for j in range(len(lin)):
  indexmin=j
  min=lin[j]
  for i in range(j,len(lin)):
    if lin[i]<min: 
      min=lin[i]
      indexmin=i
      
  a=lin[indexmin]
  b=lin[j]
  lin[indexmin]=b
  lin[j]=a
    
print lin