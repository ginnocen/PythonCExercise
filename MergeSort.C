#include <stdlib.h>     /* srand, rand */

void MergeSort(){

  const int arraysize=pow(2,8);
  std::vector<int> merge(std::vector <int>, std::vector <int>);

  int nexp=log(arraysize)/log(2);
  std::vector<int> original;
  
  int narray=0;
  for (int i=0;i<=nexp;i++){
    narray=narray+int(pow(2,i));
  }

  std::vector<int> splitted[narray];
    
  for (int i=0;i<arraysize;i++){
    original.push_back(rand()%arraysize);
  }

  for (int i=0;i<arraysize;i++){
    splitted[i].push_back(original[i]);
  }
  
  int counter=arraysize;
  int index=0;
  for (int i=nexp-1;i>=0;i--){
      for(int j=0;j<pow(2,i);j++){
        cout<<"index "<<index<<" and "<<index+1<<" goes to="<<arraysize<<endl;
        splitted[arraysize]=merge(splitted[index],splitted[index+1]);   
        arraysize++; 
        index=index+2;
      }
    }
   cout<< arraysize<<endl;
  for (std::vector<int>::iterator it = splitted[arraysize-1].begin() ; it != splitted[arraysize-1].end(); ++it) std::cout << ' ' << *it;
}

std::vector<int> merge(std::vector <int> a, std::vector <int> b){

  std::vector <int> arraymerged;
  int size_a=a.size();
  int size_b=b.size();
  if (size_a!=size_b) {cout<<"error in the size of the arrays"<<endl; return;}
  arraymerged.reserve(size_a*2);

  int index_a=0;
  int index_b=0;

  for (int i=0; i<2*size_a;i++){
  
    if(index_a==size_a) {
      for (int m=index_b; m<size_a;m++) arraymerged.push_back(b[m]);
      return arraymerged;
    }
    if(index_b==size_a) {
      for (int m=index_a; m<size_a;m++) arraymerged.push_back(a[m]);
      return arraymerged;
    }
    
    if(a[index_a]<=b[index_b]){
      arraymerged.push_back(a[index_a]);
      index_a++;
    }
    else{
      arraymerged.push_back(b[index_b]);
      index_b++;
    }    
  }
}