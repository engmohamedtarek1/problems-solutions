// 731A - Night at the Museum - https://codeforces.com/contest/731/problem/A
/*
  Answer: https://codeforces.com/contest/731/submission/269220011
  Time: 61 ms
  Memory: 24 KB
*/

#include <iostream>
using namespace std;

void solve(string s)
{
  int rotations = 0;
  char c = 'a';

  for (int i = 0; i < s.length(); ++i)
  {
    rotations += min(abs(c - s[i]), 26 - abs(c - s[i]));
    c = s[i];
  }

  cout << rotations;
}

int main()
{
  string s;
  cin >> s;

  solve(s);
  return 0;
}