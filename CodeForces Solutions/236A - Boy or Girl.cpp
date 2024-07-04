// 236A - Boy or Girl - https://codeforces.com/contest/236/problem/A
/*
  Answer: https://codeforces.com/contest/236/submission/268760576
  Time: 154 ms
  Memory: 20 KB
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin >> str;

  sort(str.begin(), str.end());
  auto res = unique(str.begin(), str.end());
  string newStr = string(str.begin(), res);

  if (newStr.length() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";

  return 0;
}
