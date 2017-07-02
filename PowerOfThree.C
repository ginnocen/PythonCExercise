//Write a C++ program to check if a given positive integer is a power of 3.

bool calculateIfpower3(int number){
  while (number % 3 == 0){
    cout<<"number="<<number<<endl;
    number /= 3;         
  }
  
  return (number == 1);
}

void PowerOfThree(int value=33){
  if (calculateIfpower3(value)) {
    cout<<"is power of 3"<<endl;
  }
  else cout<<"is not power of 2"<<endl;
}
