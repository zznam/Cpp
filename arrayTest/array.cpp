#include "array.hpp"

int main(int argc, char const *argv[])
{
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    for (int i = 0; i < 5; i++)
    {
        cout<<cars[i]<<endl;
    }
    
    return 0;
}
