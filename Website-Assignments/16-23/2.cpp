#include <iostream>
using namespace std;

int main() {
    double salary = 5000.98;
    // 8 Bytes
    cout << sizeof(salary) << endl;
    // 64 Bits
    cout << sizeof(salary) * 8 << endl;

    return 0;
}