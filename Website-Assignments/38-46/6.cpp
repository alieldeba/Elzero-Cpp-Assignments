#include <iostream>
using namespace std;

int main() {
    int vals[] = {10, 20, 30};
    
    // Write Your Code Here
    vals[0] = 100;
    vals[1] = 200;
    vals[2] = 300;
    vals[3] = 400;
    
    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
    cout << vals[3] << "\n"; // 400

    return 0;
}
