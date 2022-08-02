#include <iostream>
#include <string>
using namespace std;
class ProgrammingLanguage
{
private:
    string name;

public:
    ProgrammingLanguage(string n);
    ~ProgrammingLanguage();
    string getName();
};

ProgrammingLanguage::ProgrammingLanguage(string n)
{
    this->name = n;
    cout << "Programming Langauge: " << this->name << " created" << endl;
}

ProgrammingLanguage::~ProgrammingLanguage()
{
    cout << "Programming Langauge: " << this->name << " deleted" << endl;
}
string ProgrammingLanguage::getName()
{
    return this->name;
}

int main()
{
    ProgrammingLanguage pLangObject("python");
    cout << pLangObject.getName() << endl;
}
