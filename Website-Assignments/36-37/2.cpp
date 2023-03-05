#include <iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;

  switch (day)
  {
  case 1:
  case 2:
  case 3:
    cout << day << " Shop Is Open";
    break;
  case 4:
  case 5:
    cout << day << " Shop Is Closed";
    break;
  default:
    cout << "Day Is Not Valid";
  }

  return 0;
}
