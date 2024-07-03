// 791A - Bear and Big Brother - https://codeforces.com/contest/791/problem/A
/*
  Answer: https://codeforces.com/contest/791/submission/268622017
  Time: 62 ms
  Memory: 0 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int wL, wB, years = 0;
  cin >> wL >> wB;

  while (wL <= wB)
  {
    wL *= 3;
    wB *= 2;
    years++;
  }

  cout << years;

  return 0;
}
