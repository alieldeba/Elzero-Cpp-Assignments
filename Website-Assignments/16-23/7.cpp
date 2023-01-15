#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;
    
    // Output Needed
    // "EWS"
    cout << char(d - a) << char(d + c) << char(d + b);
    return 0;
}