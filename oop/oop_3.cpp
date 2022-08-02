#include <iostream>
#include <string>
using namespace std;
class Girlfriend
{
private:
    string name;
    string occupation;
    bool isBeautiful;
    bool isJealous;

public:
    Girlfriend(string n, string o, bool isB, bool isJ)
    {
        this->name = n;
        this->occupation = o;
        this->isBeautiful = isB;
        this->isJealous = isJ;
    }
    ~Girlfriend()
    {
        cout << "Bye, See you later!" << endl;
        cout << "-your " << (this->isBeautiful ? ";) beautiful " : ":( ugly ") << " GF " << this->name << " \"" << endl;
    }
    void introduce()
    {
        cout << "Hello" << endl;
        cout << "I am " << this->name << endl;
        cout << "I am a " << this->occupation << endl;
    }
    void checkBFsPhone()
    {
        if (this->isJealous)
        {
            cout << "Yeah sure, I'll do it right now!" << endl;
        }
        else
        {
            cout << "No, I trust him" << endl;
        }
    }
};

int main()
{
    Girlfriend gf1("Jennifer", "Doctor", true, false);
    Girlfriend gf2("Chaya", "Engineer", false, true);
    gf1.introduce();
    cout << "User: Check you BFs phone" << endl;
    gf1.checkBFsPhone();

    cout << endl;

    gf2.introduce();
    cout << "User: Check you BFs phone" << endl;
    gf2.checkBFsPhone();
    return 1;
}