#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    
    cout << ((a + b) * (a + b) + a * a) * a << "\n";       // 10000
    
    // Hint For Help
    cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
    cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300

    return 0;
}