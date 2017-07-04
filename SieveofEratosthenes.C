void SieveofEratosthenes(){

  const int maxnum=1000000;
  int bool_isprime[maxnum];
  
  int counteroperations=0;
  
  for (int m=0;m<maxnum;m++){
    bool_isprime[m]=true;
    counteroperations++;
  }

  for (int m=2;m<=int(sqrt(maxnum));m++){       // qui io luppo su i possibili multipli
    for (int j=2;j<=int(maxnum/m);j++){                  // e.g. se il multiplo e 3 allora il massimo numero di iterazioni sara int(1000/3)
      if(m*j<maxnum) bool_isprime[m*j]=false;      
      counteroperations+=2;
    }
  }


TH1F*hPrimes=new TH1F("hPrimes","hPrimes",int(maxnum/1000),0,maxnum);
for (int m=2;m<maxnum;m++){
  if (bool_isprime[m]==true) {
    cout<<"il numero ="<<m<<"e primo"<<endl;
    hPrimes->Fill(m);
  }
  counteroperations++;
}
cout<<"total number of operations="<<counteroperations<<endl;
hPrimes->Draw();
}


