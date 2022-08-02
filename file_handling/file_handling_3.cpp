// A program for counting the number of alphabets in a file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string filename;
    int charAsciiCode;
    char character;
    int noOfAlphabets = 0;
    ifstream fileObjectToBeRead;
    cout << "This program will find the total number of alphabets used in the file" << endl;
    cout << "Please Enter the filename: " << endl;
    cin >> filename;
    fileObjectToBeRead.open(filename);
    // Use this .good to check wether the file was found any no error ocurred
    if (!fileObjectToBeRead.good())
    {
        cerr << "UNABLE TO OPEN FILE" << endl;
    }
    if (fileObjectToBeRead.is_open())
    {
        while (!fileObjectToBeRead.eof())
        {
            fileObjectToBeRead.get(character);
            charAsciiCode = character;
            if ((charAsciiCode >= 65 && charAsciiCode <= 90) || (charAsciiCode >= 97 && charAsciiCode <= 122))
            {
                noOfAlphabets++;
            }
        }
        cout << "The Number Of Alphabets in the file are: " << endl;
        cout << noOfAlphabets << endl;
    }
    return 1;
}