/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::string address; 
    std::string phoneNumber; 
    std::cout<<"Tell me your name?: ";
    std::getline(std::cin, userName);
    std::cout<<"Tell me your address?: ";
    std::getline(std::cin, address);
    std::cout<<"Tell me your phone number?: ";
    std::getline(std::cin, phoneNumber);
    std::cout<<"\n"<<userName<<"\n\t\t"<<address<<"\n\t\t"<<phoneNumber;
    std::cout<<"Tell me your name?: ";
    std::getline(std::cin, userName);
    std::cout<<"Tell me your address?: ";
    std::getline(std::cin, address);
    std::cout<<"Tell me your phone number?: ";
    std::getline(std::cin, phoneNumber);
    std::cout<<"\n"<<userName<<"\n\t\t"<<address<<"\n\t\t"<<phoneNumber;
    return 0;
}