int fibonacciEl(int nelements=3){
  
  if(nelements<=1) return 1;
  
  int el1=1;
  int el2=1;
  int el3;
  
  for (int i=2;i<nelements;i++){
    el3=el1+el2;
    el1=el2;
    el2=el3;
  }
  return el3;  
}
