#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  x >>= 3;
  cout << x << endl;

  x = 5;
  x <<= 3;
  cout << x << endl;
  return 0;
}
