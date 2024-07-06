// 427A - Police Recruits - https://codeforces.com/contest/427/problem/A
/*
  Answer: https://codeforces.com/contest/427/submission/269077978
  Time: 109 ms
  Memory: 24 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int n, cnt = 0, policeMen = 0, crimes = 0;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != -1)
      policeMen += arr[i];
    if (arr[i] == -1)
      if (policeMen)
        policeMen--;
      else
        crimes++;
  }

  cout << crimes;

  return 0;
}
