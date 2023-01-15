#include <iostream>
using namespace std;

int main() {
    // Do Not Edit Here
    short int a = 100;
    float b = 98.5f;
    double c = 1.7;
    
    // Edit This Line And Use Type Casting To Get The Output
    cout << a + int(b) + sizeof(short(c)) << "\n"; // 200

    return 0;
}
