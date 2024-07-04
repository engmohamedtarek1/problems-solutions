// 112A - Petya and Strings - https://codeforces.com/contest/112/problem/A
/*
  Answer: https://codeforces.com/contest/112/submission/268756505
  Time: 124 ms
  Memory: 16 KB
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  for (auto &x : s1)
  {
    x = tolower(x);
  }
  for (auto &x : s2)
  {
    x = tolower(x);
  }

  if (s1 < s2)
    cout << -1;
  else if (s1 > s2)
    cout << 1;
  else
    cout << 0;

  return 0;
}
