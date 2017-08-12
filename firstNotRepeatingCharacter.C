char firstNotRepeatingCharacter(std::string str="aaddfd"){
  int arraycounts[26];
  for (int i=0;i<26;i++) arraycounts[i]=0;
  std::string output;
  
  for ( std::string::iterator it=str.begin(); it!=str.end(); ++it){
     arraycounts[int(char(*it))-97]++;
     if(arraycounts[int(char(*it))-97]<=1){
       std::string a(1,*it);
       output=output+a;
     }
  }
  for ( std::string::iterator it=output.begin(); it!=output.end(); ++it){
    if(arraycounts[int(char(*it))-97]<=1){
      return char(*it);
    }
    return "_"
  }
}

