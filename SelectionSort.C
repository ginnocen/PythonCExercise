void SelectionSort(){

  const int arraysize=1000;
  int arrayunsorted[arraysize];
    
  for (int i=0;i<arraysize;i++){
    arrayunsorted[i]=rand()%arraysize;
  }
  
  int indexmin;
  int min;
  
    for (int i=0;i<arraysize;i++){
    cout<<arrayunsorted[i]<<endl;
  }  

  cout<<"----------"<<endl;
  
  for (int position=0; position<arraysize; position++){
    min=arrayunsorted[position];
    indexmin=position;
    for (int index=position;index<arraysize; index++){
       if (arrayunsorted[index]<min){
          indexmin=index;
          min=arrayunsorted[index];
       }
    }
     int a=arrayunsorted[indexmin];
     int b=arrayunsorted[position];
     arrayunsorted[indexmin]=b;
     arrayunsorted[position]=a;
  }

  for (int i=0;i<arraysize;i++){
    cout<<arrayunsorted[i]<<endl;
  }  
}


// extra memory complexity O(1)
// extra time complexity 
// n+n-1+n-2+n-3 ..... 1 = n^2
