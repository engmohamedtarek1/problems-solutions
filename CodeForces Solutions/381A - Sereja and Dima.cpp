// 381A - Sereja and Dima - https://codeforces.com/contest/381/problem/A
/*
  Answer: https://codeforces.com/contest/381/submission/269072677
  Time: 62 ms
  Memory: 12 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int n, serejaPoints = 0, dimaPoints = 0, tracker = 0;
  cin >> n;
  int arr[n], d = n - 1;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i <= d; tracker++)
  {

    if (arr[i] >= arr[d])
    {
      if (tracker % 2 == 0)
      {
        serejaPoints += arr[i];
        i++;
      }
      else
      {
        dimaPoints += arr[i];
        i++;
      }
    }
    else
    {
      if (tracker % 2 == 0)
      {
        serejaPoints += arr[d];
        d--;
      }
      else
      {
        dimaPoints += arr[d];
        d--;
      }
    }
  }

  cout << serejaPoints << " " << dimaPoints;

  return 0;
}
