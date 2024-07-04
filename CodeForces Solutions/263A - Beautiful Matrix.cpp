// 263A - Beautiful Matrix - https://codeforces.com/contest/263/problem/A
/*
  Answer: https://codeforces.com/contest/263/submission/268751070
  Time: 124 ms
  Memory: 24 KB
*/

#include <iostream>
using namespace std;

int main()
{
  const int R = 5, C = 5;
  int arr[R][C], moves = 0;

  for (int i = 0; i < R; ++i)
    for (int j = 0; j < C; ++j)
      cin >> arr[i][j];

  if (arr[2][2] == 1)
  {
    cout << 0;
    return 0;
  }

  for (int i = 0; i < R; ++i)
    for (int j = 0; j < C; ++j)
      if (arr[i][j] == 1)
      {
        if (i < 2)
          moves += 2 - i;
        if (i > 2)
          moves += i - 2;
        if (j < 2)
          moves += 2 - j;
        if (j > 2)
          moves += j - 2;

        cout << moves;
        return 0;
      }
}
