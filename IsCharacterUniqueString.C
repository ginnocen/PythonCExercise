/*
In the ASCII standard, we have 128 possible characters.  
And to each letter there is an associated ASCII value that is an integer.
the ASCII values goes from 0 to 127.
*/

int IsCharacterUniqueString(string stringtotest="abc"){

  if(stringtotest.length()>128) return 0;
  bool arraycharacters[128];

  for(int i=0;i<stringtotest.length();i++){
     if (arraycharacters[int(stringtotest.at(i))]==true) return 0;
     arraycharacters[int(stringtotest.at(i))]=true;
  }
  return 1;
}

