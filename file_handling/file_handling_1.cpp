// A program to read a file to the console by asking
// the file name from the user
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string filename;
    string singleLineOfTheFile;
    ifstream fileObjectToBeRead;
    cout << "Please enter the name of the file to be read to the console: " << endl;
    cin >> filename;

    fileObjectToBeRead.open(filename);
    if (!fileObjectToBeRead.good())
    {
        cerr << "UNABLE TO OPEN FILE" << endl;
    }
    if (fileObjectToBeRead.is_open())
    {
        while (!fileObjectToBeRead.eof())
        {
            getline(fileObjectToBeRead, singleLineOfTheFile);
            cout << singleLineOfTheFile << endl;
        }
    }

    fileObjectToBeRead.close();
    return 1;
}

// Improvements:
// Check wether a file exists and accordingly give error message