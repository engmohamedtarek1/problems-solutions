// 281A - Word Capitalization - https://codeforces.com/contest/281/problem/A
/*
  Answer: https://codeforces.com/contest/281/submission/269062982
  Time: 154 ms
  Memory: 16 KB
*/

#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;

  if (int(s[0]) > 96 && int(s[0]) < 123)
    s[0] = char(s[0] - 'a' + 'A');

  cout << s;

  return 0;
}
