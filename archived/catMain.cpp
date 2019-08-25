/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/



#include "catMain.hpp"

int main()
{
    Cat cat;
    cat.setName("Tom");
    cat.setAge(32);
    cat.setBreed("male");
    return 0;
}