#include <iostream>
using namespace std;

int main() {
    double kilobytes;
    cout << "Enter A Number Of Kilobytes\n";
    cin >> kilobytes;
    cout << "\n";
    cout << "[1] " << kilobytes << " Kilobytes" << "\n";
    cout << "[2] " << kilobytes * 1024 << " Bytes" << "\n";
    cout << "[3] " << kilobytes * 1024 * 8 << " Bits"<< "\n";

    return 0;
}
