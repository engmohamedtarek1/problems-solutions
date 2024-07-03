// 677A - Vanya and Fence - https://codeforces.com/contest/677/problem/A
/*
  Answer: https://codeforces.com/contest/677/submission/268612511
  Time: 61 ms
  Memory: 32 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int nFriends, fence, width = 0;
  cin >> nFriends >> fence;

  while (nFriends--)
  {
    int person;
    cin >> person;

    if (person <= fence)
      width++;
    else
      width += 2;
  }

  cout << width;

  return 0;
}
