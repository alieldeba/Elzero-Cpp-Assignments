#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    switch(num) {
        case 10:
            cout << "Case 1";
            break;
        case 20:
            cout << "Case 2";
            break;
        case 30:
        case 31:
        case 32:
            cout << "Case 3";
            break;
        default:
            cout << "Invalid Number";
    }

    return 0;
}
