// this exercise is supposed to calculate the sum of numbers. 
// E.g. calling the function sum(8)=1+2+3+4+5+6+7+8=36
// the complexity of a code is the number of simple operations you have to perform.
// Write a code that calculate the sum of the number 
/*
void sum(int n=10){

  int mysum=0;
  for (int i=0; i<n;i++){
    mysum+=i;
  }
  cout<<mysum<<endl;
}
*/
/*
what is the complexity of this algorithm? the complexity in this case is O(N)
lets see what happens if I made this code recursively
*/

int sum2(int n){
  if (n==0) return 0; 
  else return n + sum(n-1);
}

// questo programma ricorsivo fa la seguente cosa 
/*

sum(5)=1 + 2 + 3 + 4 + 5  
           = 5 + sum (4)
           = 5 + 4 + sum (3)
           = 5 + 4 + 3 + sum(2)
           = 5 + 4 + 3 + 2 + sum (1)
           = 5 + 4 + 3 + 2 + 1 + sum(0) ---> sum(0) deve essere zero. 
           = 5 + 4 + 3 + 2 + 1 + 0 
*/

void make_couples(){

  const int Nslots=5;
  int array[Nslots]={1,2,3,4,5};

  for (int i=0;i<Nslots;i++){
    for (int j=0;j<Nslots;j++){
      cout<<"("<<i<<","<<j<<")"<<endl;
    }
  }
}