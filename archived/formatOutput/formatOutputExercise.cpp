/*Formatting Output 
 **Goal: practice using cout to format output to console
 **Print the variables in three columns:
 **Ints, Floats, Doubles
 */

#include <iostream>

#include <iomanip>
 //in/out Manipulators
int main() {
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    std::cout << "print with set width = 10\n";
    std::cout << "Ints" << std::setw(10);
    std::cout << "Floats" << std::setw(10);
    std::cout << "Doubles" << std::setw(10) << "\n";
    std::cout << a << std::setw(10) << b << std::setw(10) << c<< std::setw(10) << "\n";
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    std::cout << aa << std::setw(10) << bb << std::setw(10) << c << std::setw(10)<< "\n";
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    std::cout << aaa << std::setw(10) << bbb << std::setw(10) << ccc << std::setw(10)<< "\n";
    return 0;
}