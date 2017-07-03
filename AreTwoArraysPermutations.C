/*
In the ASCII standard, we have 128 possible characters.  
And to each letter there is an associated ASCII value that is an integer.
the ASCII values goes from 0 to 127.
*/

int AreTwoArraysPermutations(string stringtotest1="abc",string stringtotest2="bca"){

  if (stringtotest1.length()!=stringtotest2.length()!) return 0;
  
  int arraycharacters1[128];
  int arraycharacters2[128];
  
  for(int i=0;i<stringtotest1.length();i++){
     arraycharacters1[int(stringtotest1.at(i))]+=1;
     arraycharacters2[int(stringtotest2.at(i))]+=1;
  }
  
  for(int i=0;i<stringtotest1.length();i++){
    if(arraycharacters1[i]!=arraycharacters2[i]) return 0;
  }
  return 1;
}

