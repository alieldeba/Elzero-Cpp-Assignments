#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  // Write Your Code Here
  newNums = oldNums;
  reverse(begin(newNums), end(newNums));

  // Do Not Edit The Next 3 Lines
  cout << newNums[0] << "\n"; // 30
  cout << newNums[1] << "\n"; // 20
  cout << newNums[2] << "\n"; // 10

  return 0;
}
