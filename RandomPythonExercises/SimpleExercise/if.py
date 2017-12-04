## an important difference within the two options below:
## from X import * and import X is that if you use the first one 
## with option 2 you always have to X.something in the other case only something
## the option 'from X import *' is more risky because of naming conflicts
## in this case in one case would be math.sqrt(x) in the other would be sqrt(x) directly
 
import math
x=int(raw_input("please enter an integer: "))
if x<0:
  print 'values <0 not allowed'
  print 'it will be set to zero'
  x==0
elif x>=0:
  print 'input value larger than 0, we can calculate the square root of this number'
  root=math.sqrt(x)
  print 'the square root is',root