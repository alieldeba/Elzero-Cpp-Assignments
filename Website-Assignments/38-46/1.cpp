#include <iostream>
using namespace std;

int main() {
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};
    
    cout << "Number " << nums[0] << " Award Is: " << awards[0] << endl;
    cout << "Number " << nums[1] << " Award Is: " << awards[1] << endl;
    cout << "Number " << nums[2] << " Award Is: " << awards[2] << endl;
    cout << "Number " << nums[3] << " Award Is: " << awards[3] << endl;
    
    // Output Needed
    // "Number 100 Award Is: iPhone"
    // "Number 300 Award Is: iPad"
    // "Number 600 Award Is: PC"
    // "Number 900 Award Is: Car"

    return 0;
}
