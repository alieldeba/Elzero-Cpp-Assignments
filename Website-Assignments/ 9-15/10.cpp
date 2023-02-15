#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int one, two;
  cout << "Number One => ";
  cin >> one;
  cout << "\n";
  cout << "Number Two => ";
  cin >> two;
  cout << "\n";
  cout << "Needed Output " << one * two << " [" << one << " * " << two << "]";

  // Number One => 10
  // Number Two => 100
  // Needed Output 1000 [10 * 100]
  return 0;
}