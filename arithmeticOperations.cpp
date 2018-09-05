/*Goal: practice arithmetic operations in C++
** calculate the volumes of a cube, sphere, cone.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float cubeSide = 5.4;
    float sphereRadius = 2.33;

    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    volCube = pow(cubeSide, 3);
    volSphere = M_PI * pow(sphereRadius, 3) * 4.0 / 3.0;
    volCone = coneRadius * coneRadius * M_PI * coneHeight / 3.0;
    cout << volCube << "\n";
    cout << volSphere << "\n";
    cout << volCone << "\n";

    return 0;
}