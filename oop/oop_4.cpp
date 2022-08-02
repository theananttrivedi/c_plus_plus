#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice
{
private:
    int currentNumber;

public:
    Dice()
    {
        srand(time(0));
    }
    int roll()
    {
        this->currentNumber = 1 + (rand() % 6);
        return this->currentNumber;
    }
    int getLastNumber()
    {
        return this->currentNumber;
    }
};
int main()
{

    Dice diceObject;
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << diceObject.roll() << endl;
    //     i++;
    // }
    cout << diceObject.roll() << endl;
    // cout << diceObject.getLastNumber() << endl;

    return 1;
}

// Improvements
// Add Vector and store history of rolls