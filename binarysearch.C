const int Narray=100;
int array[Narray];

int binarysearch(int value=4){

  void init();
  int counter_iterations=0;
  init();
  
  int indexMin=0;
  int indexMax=Narray;
  int centralindex=indexMin+int((indexMax-indexMin)/2);
  
  cout<<"indexMin="<<indexMin<<endl;
  cout<<"indexMax="<<indexMax<<endl;    
  cout<<"centralindex="<<centralindex<<endl;

  while (value!=array[centralindex]){
    cout<<"*********************************"<<endl;  
    if(value<array[centralindex]) { indexMin=indexMin; indexMax=centralindex-1;}
    else  { indexMin=centralindex+1; indexMax=indexMax;}
    cout<<"indexMin="<<indexMin<<endl;
    cout<<"indexMax="<<indexMax<<endl;    
    centralindex=indexMin+int((indexMax-indexMin)/2);
    cout<<"centralindex="<<centralindex<<endl;
    counter_iterations++;
  }
  cout<<"total number of operations="<<counter_iterations<<endl;
  return centralindex;
}


void init(){
  cout<<"(";
  for (int i=0; i<Narray;i++){
    array[i]=i;
    cout<<i<<",";
  }
  cout<<")"<<endl;
}