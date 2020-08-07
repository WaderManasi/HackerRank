///////////////////////////////////C++ solution///////////////////////////////////////

/////to check whether number is prime or not

#include <iostream>
using namespace std;

int main()
{
long int n;
  int i,test;
  bool isPrime;
  cin>>test;
 for(int k=1;k<=test;k++)
 { 
    cin >> n;
    isPrime = 1;
    if(n==1)
        isPrime=0;
  for(i = 2; i * i<= n; ++i)      //efficient way to reduce time complexity
  {
      if(n % i == 0)
      { isPrime = 0;
        break;
      }
  }

  if (isPrime)
      cout << "Prime\n";
  else
      cout << "Not prime\n";
 }
  return 0;
}
////////////////////////////////end of code///////////////////////////////////////////
