#include "references.hpp"

int main(int argc, char const *argv[])
{
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    cout << &meal << "\n";  // Outputs 0x7ffee2044388
    cout << &food << "\n";  // Outputs 0x7ffee2044388
    return 0;
}
