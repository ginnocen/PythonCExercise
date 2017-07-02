#include <ctime>

int fibonacciRecursiveMethod(int nelement=5){
  if (nelement<=1) return 1;
  return fibonacciRecursiveMethod(nelement-1) + fibonacciRecursiveMethod(nelement-2);
  }


void fibonacciRecursive(int totnelements=30){
  int start_s=clock();
  for (int i=0;i<totnelements;i++) cout<<fibonacciRecursiveMethod(i)<<endl;
  int stop_s=clock();
}


/*
Lets try to analyse the complexity of this stupid algorithm.

each fibonacci sequence takes 2^n steps
but 
n=1 ->2^1
n=2 ->2^2
n=3 ->2^3
n=4 ->2..
n=5 ->2
n=6 ->2
n=7 ->2

So in total is 2^n is the dominant term.





*/