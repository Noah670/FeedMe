#include <iostream>

// uses windows library
#include <windows.h>
using namespace std;

/* Noah Pohl
2/9/2020
FeedMe.cpp
A beast is famished and needs your help to feed him.
*/

int main()
{
    cout << "Hey you there \n";

    string welcome = "I am but a beast trapped in the forest world of C++ \n";
    cout << welcome;

    // give me some food to eat I am very hungry!
    cout << "Please give me something to eat I am very hungry!\n";
    cout << "If I do not eat anything I will surely die!\n";

    // give the beast something to eat
    string feedme;
    cin >> feedme;

    cout << "Mmmmm yes I love eating " << feedme << "\n";
    cout << "How did you know I like " << feedme << "?\n";
    cout << "Thanks for feeding me but I could use another bite!\n";

    cout << "What else do you have for me to eat?\n";
    string stillHungry;
    cin >> stillHungry;

    // beast gets mad by the offer you provide
    cout << "I hate " << stillHungry << "! \n";

    cout << "You have been eaten by the beast!\n";

    // press any key to exit
    system("pause");

    return 0;
}