#include <iostream>
using namespace std;

int main() {
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    // Output Needed
    // "Character Of This ASCII Value 69 Is E"
    cout << "Character Of This ASCII Value " << a << " Is " << char(a) << endl;
    // "Character Of This ASCII Value 108 Is l"
    cout << "Character Of This ASCII Value " << b << " Is " << char(b) << endl;
    // "Character Of This ASCII Value 122 Is z"
    cout << "Character Of This ASCII Value " << c << " Is " << char(c) << endl;
    // "Character Of This ASCII Value 101 Is e"
    cout << "Character Of This ASCII Value " << d << " Is " << char(d) << endl;
    // "Character Of This ASCII Value 114 Is r"
    cout << "Character Of This ASCII Value " << e << " Is " << char(e) << endl;
    // "Character Of This ASCII Value 111 Is o"
    cout << "Character Of This ASCII Value " << f << " Is " << char(f) << endl;

    // Output Needed In Last Line
    // "Elzero"
    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);

    return 0;
}