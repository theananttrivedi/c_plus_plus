#include <iostream>
#include <string>
using namespace std;
// The flow of constructors and destructors in the base class and derived class
class ProgrammingLanguage
{

public:
    ProgrammingLanguage();
    ~ProgrammingLanguage();
    string getName();
};

ProgrammingLanguage::ProgrammingLanguage()
{
    cout << "Programming Language Constructor" << endl;
}

ProgrammingLanguage::~ProgrammingLanguage()
{
    cout << "Programming Language Destructor" << endl;
}

class Python : public ProgrammingLanguage
{
public:
    Python()
    {
        cout << "Python - Programming Language Constructor" << endl;
    }
    ~Python()
    {
        cout << "Python - Programming Language Destructor" << endl;
    }
};

main()
{
    Python pLangObject;
}
