#include "pointer1.hpp"
int sum(int a, int b);

// int main(int argc, char const *argv[])
int main(int argc, char const *argv[])
{
    // string food = "Pizza"; // A food variable of type string

    // cout << food <<"\n";  // Outputs the value of food (Pizza)
    // cout << &food<<"\n"; // Outputs the memory address of food (0x6dfed4)

    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food
    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";
    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    int result = sum(5, 6);

    cout << sum(6, 7) << "\n";
    return 0;
}


int sum(int a, int b)
{
    // code to be executed
    return a + b;
}


