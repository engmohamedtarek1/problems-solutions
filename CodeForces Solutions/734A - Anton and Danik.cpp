// 734A - Anton and Danik - https://codeforces.com/contest/734/problem/A
/*
  Answer: https://codeforces.com/contest/734/submission/268619625
  Time: 61 ms
  Memory: 24 KB
*/

#include <iostream>
using namespace std;

int main()
{
  int nGames, wA = 0, wD = 0;
  cin >> nGames;

  while (nGames--)
  {
    char person;
    cin >> person;

    if (person == 'A')
      wA++;
    else
      wD++;
  }

  if (wA > wD)
    cout << "Anton";
  else if (wD > wA)
    cout << "Danik";
  else
    cout << "Friendship";

  return 0;
}
