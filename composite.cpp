#include <iostream>
using namespace std;
int main()
{
  int n, i,count=0;
   cout << "Enter the number: ";
  cin >> n;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          count++;
      }
  }
  if (count!=0)
      {
          cout << "This is a composite number";
      }
  else
      {
          cout << "This is not a composite number";
        }
  return 0;
}
