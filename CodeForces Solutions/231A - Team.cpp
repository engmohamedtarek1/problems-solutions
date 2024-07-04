// 231A - Team - https://codeforces.com/contest/231/problem/A
/*
  Answer: https://codeforces.com/contest/231/submission/268747480
  Time: 124 ms
  Memory: 20 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int n, result = 0;
  cin >> n;

  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) > 1)
      result++;
  }

  cout << result;

  return 0;
}
