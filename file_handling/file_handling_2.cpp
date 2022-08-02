// A program to write to a file through the console

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const string TRUNCATE_WRITING_PROCESS_CODE = "-1exit()";
    string filename;
    string lineToBeWrittenToTheFile;
    ofstream fileObjectToWriteTo;
    cout << "Enter the file name to write to:" << endl;
    cin >> filename;
    fileObjectToWriteTo.open(filename);
    if (!fileObjectToWriteTo.good())
    {
        cerr << "UNABLE TO OPEN FILE" << endl;
    }
    if (fileObjectToWriteTo.is_open())
    {
        cout << "File opened" << endl;
        cout << "Now every line that you write would be written to the file - " << filename << " " << endl;
        cin >> lineToBeWrittenToTheFile;
        while (lineToBeWrittenToTheFile != TRUNCATE_WRITING_PROCESS_CODE)
        {
            // Remember to use endl other wise the file would not give line breaks
            fileObjectToWriteTo << lineToBeWrittenToTheFile << endl;
            cin >> lineToBeWrittenToTheFile;
        }
    }
    fileObjectToWriteTo.close();
}

// Improvements
// Ask the candidate to push the data to an existing file (default mode)
// or clear the file so that the user writes to a brand new file