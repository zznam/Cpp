#include <iostream>
using namespace std;

int main()
{

  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();

  string myString = "Hello";
  cout << myString[0];
  // Outputs H

  string fullName;
  cout << "Type your full name: ";
  getline(cin, fullName);
  cout << "Your name is: " << fullName;

  string myString = "Hello";
  cout << myString[0];
  // Outputs H

  // Omitting Namespace
  std::string greeting = "Hello";
  std::cout << greeting;

  string firstName;
  cout << "Type your first name: ";
  cin >> firstName; // get user input from the keyboard
  cout << "Your name is: " << firstName;

  // Type your first name: John
  // Your name is: John
  return 0;
}
