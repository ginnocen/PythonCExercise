std::string listToString(std::vector<int> l) {
  std::string output;
  int bases[3]={8,2,16};
  for (int i=0;i<3;i++){
    output.append(decimaltobase(l[i],bases[i]));
    if(i<=1) output.append(" ");
  }
  return output;
}

string decimaltobase(int n=00000,const int base=2){

  string stringbin[16]={"0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"};
  string output;
  int maxexp=int(log(n)/log(base));
  for (int i=std::max(maxexp,0); i>=0;i--){
    int div=double(n)/double(pow(base,i));
    output=output+stringbin[div];    n=n-div*pow(base,i);
  }
  return output;
}