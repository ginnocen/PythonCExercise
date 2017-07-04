#include <stdlib.h>     /* srand, rand */

void BubbleSort(){

  const int arraysize=100000;
  int arrayunsorted[arraysize];
  for (int i=0;i<arraysize;i++){
    arrayunsorted[i]=rand()%arraysize;
  }
  
  bool flag=true;
  while (flag){
    flag=false;
    for (int i=0;i<arraysize;i++){
      int a=arrayunsorted[i];
      int b=arrayunsorted[i+1];
      if(a>b) {arrayunsorted[i]=b; arrayunsorted[i+1]=a;}
    }//end sorting loop
    for (int i=0;i<arraysize;i++){
      int a=arrayunsorted[i];
      int b=arrayunsorted[i+1];
      if(a>b) {flag=true;}
    }//end checking loop
  }// end of while
  
  for (int i=0;i<arraysize;i++){
    cout<<arrayunsorted[i]<<endl;
  }
}  //end of code


// is clearly a O(n2) algorithm :).