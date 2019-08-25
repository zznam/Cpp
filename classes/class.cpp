#include "class.hpp"

class MyClass
{                    // The class
public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
public:              // Access specifier
    void myMethod2();
public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Constructors_Hello_World!";
    }
public: // Access specifier
    void myMethod()
    { // Method/function defined inside the class
        cout << "myMethod_Hello_World!";
    };
    int speed(int maxSpeed);
};
int MyClass::speed(int maxSpeed)
{
    return maxSpeed * 2;
}

// Method/function definition outside the class
void MyClass::myMethod2()
{
    cout << "myMethod2_Hello_World!";
}
// int main(int argc, char const *argv[])
int main(int argc, char const *argv[])
{
    MyClass myObj; // Create an object of MyClass
    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    myObj.myMethod();  // Call the method
    myObj.myMethod2(); // Call the method
    int doubleSpeed = myObj.speed(60);
    cout << doubleSpeed << "\n";

    return 0;
}
