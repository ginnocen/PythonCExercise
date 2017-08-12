void PowerLaw(int base=5, int expo=2){

  int result=1;
  for (int i=1;i<=expo;i++){
    result=result*base;
  }
  cout<<"result="<<result<<endl;
}