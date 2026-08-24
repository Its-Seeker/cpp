// find num is even or odd

#include <iostream>
using namespace std;
// 1->Prime numbers
// 0->not prime
bool isPrime(int n)
{
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n;
  cin >> n;
  if (isPrime(n))
  {
    cout << "Number is Prime " << endl;
  }
  else
  {
    cout << "number is not prime" << endl;
  }
}