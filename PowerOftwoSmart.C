//Write a C++ program to check if a given positive integer is a power of two.
bool IsPowerOfTwo(int myvalue)
{
    return (myvalue>0) && ((myvalue & (myvalue - 1)) == 0);
}

void PowerOftwoSmart(int value=33){
  if (IsPowerOfTwo(value)) {
    cout<<"is power of 2"<<endl;
  }
  else cout<<"is not power of 2"<<endl;
}
