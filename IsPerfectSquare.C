//Write a C++ program to check if a given positive integer is a power of two.
int PerfectSquare(int myvalue){
  
  int result=-1;
  for (int base=1;base<=myvalue; base++){
    if (myvalue==base*base) result=base;
  }
  return result;
}
