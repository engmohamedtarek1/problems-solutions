// 431A - Black Square - https://codeforces.com/contest/431/problem/A
/*
  Answer: https://codeforces.com/contest/431/submission/269083028
  Time: 77 ms
  Memory: 52 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int calories[4];
  for (int i = 0; i < 4; ++i)
    cin >> calories[i];

  string game;
  cin >> game;

  int ans = 0;
  for (char c : game)
    ans += calories[c - '1'];

  cout << ans;

  return 0;
}
