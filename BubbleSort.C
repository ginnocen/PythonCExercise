#include <stdlib.h>     /* srand, rand */

void BubbleSort(){

  const int arraysize=1000;
  int arrayunsorted[arraysize];
  for (int i=0;i<arraysize;i++){
    arrayunsorted[i]=rand()%arraysize;
  }

  int swappedcounts=arraysize;
  while (swappedcounts>0){
     swappedcounts=0;
     for (int i=0;i<arraysize;i++){
      int a=arrayunsorted[i];
      int b=arrayunsorted[i+1];
      if(a>b) {arrayunsorted[i]=b; arrayunsorted[i+1]=a; swappedcounts++;}
    }//end sorting loop
}// end of while
  
  for (int i=0;i<arraysize;i++){
    cout<<arrayunsorted[i]<<endl;
  }
}  //end of code


// is clearly a O(n2) algorithm :).



/*
#include <stdlib.h>    

void BubbleSort(){

  const int arraysize=1000;
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
*/