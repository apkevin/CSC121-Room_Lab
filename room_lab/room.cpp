#include <iostream>
#include <cmath>
using namespace std;


int main() {

    float hold;
    float attending;
    float full;
    short remain;

    cout << "    Welcome to the Room Capacity Program \n";
    cout << "How many people can this room hold? \n";
    cin >> hold;
    cout << "How many people have arrived for the meeting? \n\n";
    cin >> attending;

    full = (attending / hold) * 100;
    remain = hold - attending;

    cout << "You've used up almost " << ceil(full) << "% of your room capacity!\n";
    cout << "However, I pronounce this meeting LEGAL!  Proceed with the congregation! \n";
    cout << "(BTW, you have room for " << remain <<" more people...)";
    cout << "Thank you for using the RCP!!\n" << "Endeavor to have a tremendous day! \n";

}
