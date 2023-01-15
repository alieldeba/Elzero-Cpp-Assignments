#include <iostream>
using namespace std;

int main() {
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';
    
    // Output Needed
    // "ASCII Value of ~ Is 126"
    cout << "ASCII Value of " << a << " Is " << a - 0 << endl;
    // "ASCII Value of & Is 38"
    cout << "ASCII Value of " << b << " Is " << b - 0 << endl;
    // "ASCII Value of % Is 37"
    cout << "ASCII Value of " << c << " Is " << c - 0 << endl;
    // "ASCII Value of A Is 65"
    cout << "ASCII Value of " << d << " Is " << d - 0 << endl;

    return 0;
}