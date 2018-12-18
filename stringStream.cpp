/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength;
   float length = 0;
   float width = 0;
   float area = 0;

   std::cout << "Enter the length of a room: \n";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> length;
   std::cout<<"\nYou entered "<<length<<"\n";
   std::cout << "Enter the width of a room: \n";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> width;
   std::cout<<"\nYou entered "<<width<<"\n";
   area = length*width;
   std::cout << "The area of the room is " << area;
   return 0;
 }