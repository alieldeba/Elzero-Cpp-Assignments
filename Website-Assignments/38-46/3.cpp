#include <iostream>
using namespace std;

int main() {
    int filling = 10;
    int vals[]{100, 200, 300, 400};
    
    // Write One Line Of Code Here To Fill Array Value With Number 10
    vals[0] = vals[1] = vals[2] = vals[3] = filling;
    
    cout << vals[0] << "\n"; // 10
    cout << vals[1] << "\n"; // 10
    cout << vals[2] << "\n"; // 10
    cout << vals[3] << "\n"; // 10

    return 0;
}
