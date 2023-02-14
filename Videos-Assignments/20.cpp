#include <iostream>
using namespace std;

int main () {
    int ascii;
    cout << "Enter an ASCII code : ";
    cin >> ascii;
    cout << endl;
    cout << "Character is : " << char(ascii) << endl;
    return 0;
}