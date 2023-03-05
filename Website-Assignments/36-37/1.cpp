#include <iostream>
using namespace std;

int main() {
    
    int year;
    
    cin >> year;
    cout << endl;
    
    switch(year) {
        case 1982:
            cout << "My Birth Day" << endl;
            break;
        case 1989:
            cout << "My First Work" << endl;
            break;
        case 1995:
            cout << "Windows 95" << endl;
            break;
        case 2000:
            cout << "Windows Millennium" << endl;
            break;
        case 2002:
            cout << "Created My vBulletin Forum" << endl;
            break;
        default:
            cout << "No Events in This Year" << endl;
    }
    
    /*
      1982 => "My Birth Day"
      1989 => "My First Work"
      1995 => "Windows 95"
      2000 => "Windows Millennium"
      2002 => "Created My vBulletin Forum"
      Any Other Year => "No Events in This Year"
    */

    return 0;
}
