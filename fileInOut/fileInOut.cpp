#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myFileI ("input.txt", ios::app);
    if (myFileI.is_open())
    {
        myFileI << "\nI am adding a line.\n";
        myFileI << "I am adding another line.\n";
        myFileI.close();
    }
    else cout << "Unable to open file for writing";
    //create an input stream to read the file
    ifstream myFileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myFileO.is_open())
    {
        while ( getline (myFileO,line) )
        {
            cout << line << '\n';
        }
        myFileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
