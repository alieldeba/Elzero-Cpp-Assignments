#include <iostream>
using namespace std;

int main() {
// Test Case 1
int age = 18;
int points = 450;

// Output
// "No Age Is Not Ok"
// "No Points Is Not Ok"

// Test Case 2
int age = 20;
int points = 450;

// Output
// "Yes Age Is Ok"
// "No Points Is Not Ok"

// Test Case 3
int age = 20;
int points = 650;

// Output
// "Yes Age Is Ok"
// "Yes Points Is Ok"

if (age > 18)
{
    cout << "Yes Age Is Ok" << endl;
    
    if (points > 500)
    {
        cout << "Yes Points Is Ok" << endl;
    }
    else
    {
        cout << "No Points Is Not Ok" << endl;
    }
}
else
{
    cout << "No Age Is Not Ok" << endl;
    
    if (points > 500)
    {
        cout << "Yes Points Is Ok" << endl;
    }
    else
    {
        cout << "No Points Is Not Ok" << endl;
    }
}

    return 0;
}
