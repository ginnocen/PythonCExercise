//Write a C++ program to check if a given positive integer is a power of two.
int IsPerfectSquareBis(int myvalue){

  int base=0;
  while (base<=myvalue){
    if (base*base==myvalue) return base;  
    base++;
  }
}
