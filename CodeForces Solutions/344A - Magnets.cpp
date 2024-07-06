// 344A - Magnets - https://codeforces.com/contest/344/problem/A
/*
  Answer: https://codeforces.com/contest/344/submission/269067679
  Time: 218 ms
  Memory: 24 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int n, groups = 0, a, b = 0;
  cin >> n;

  for (int i = 0; i < n; ++i)
  {
    cin >> a;
    if (a != b)
      groups++;
    b = a;
  }

  cout << groups;

  return 0;
}
