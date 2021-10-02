#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";

  // Memory Address
  cout << &food << endl; // Outputs 0x6dfed4

  return 0;
}
