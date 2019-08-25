#include "autoPractise.hpp"

int add(int x, int y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    int sum = add(5, 6); // add() returns an int, so sum will be type int
    cout << "Hello World"<<endl << sum <<"\n";
    string myString = "Hello";
    cout << myString[3];
    return 0;
}
