// 59A - Word - https://codeforces.com/contest/59/problem/A
/*
  Answer: https://codeforces.com/contest/59/submission/269061432
  Time: 92 ms
  Memory: 16 KB
*/

#include <iostream>
using namespace std;

void print_upper(string s)
{
  for (auto &x : s)
    x = toupper(x);
  cout << s;
}

void print_lower(string s)
{
  for (auto &x : s)
    x = tolower(x);
  cout << s;
}

int main()
{
  string s;
  int upper = 0, lower = 0;
  cin >> s;

  for (auto i : s)
  {
    if (int(i) > 64 && int(i) < 91)
      upper++;
    if (int(i) > 96 && int(i) < 123)
      lower++;
  }

  if (upper > lower)
    print_upper(s);
  else if (lower >= upper)
    print_lower(s);

  return 0;
}
