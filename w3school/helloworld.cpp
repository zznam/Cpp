#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!\n";
  cout << "Hello World!" << endl;

  int myNum = 15;
  cout << myNum << endl;

  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;

  int x4 = 5, y4 = 6, z = 50;
  cout << x + y + z << endl;

  int x2;
  cout << "Type a number: ";                // Type a number and press enter
  cin >> x2;                                // Get user input from the keyboard
  cout << "Your number is: " << x2 << endl; // Display the input value

  int sum2, x5, y5;
  cout << "Type a number: ";
  cin >> x5;
  cout << "Type another number: ";
  cin >> y5;
  sum2 = x5 + y5;
  cout << "Sum is: " << sum2 <<endl;

  return 0;
}
