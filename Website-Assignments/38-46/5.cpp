#include <iostream>
using namespace std;

int main() {
    // Example 1
    int vals[] = {100, 200, 600, 200, 100};
    
    // Output
    // "Array Is Palindrome"
    
    // Example 2
    int vals[] = {100, 200, 200, 100};
    
    // Output
    // "Array Is Palindrome"
    
    // Example 3
    int vals[] = {100, 300, 600, 200, 100};
    
    // Output
    // "Array Is Not Palindrome"
    
    int last = sizeof(vals) / sizeof(vals[0]) - 1;
    if (vals[0] == vals[last] && vals[1] == vals[last - 1])
    {
        cout << "Array Is Palindrome" << endl;
    }
    else
    {
        cout << "Array Is Not Palindrome" << endl;
    }

    return 0;
}
