// 112A - Petya and Strings - https://codeforces.com/contest/112/problem/A
/*
  Answer: https://codeforces.com/contest/112/submission/268756505
  Time: 124 ms
  Memory: 16 KB
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

   for (auto& x : s1) {
        x = tolower(x);
    }
    for (auto& x : s2) {
        x = tolower(x);
    }

    for(int i = 0; i < s1.length(); ++i)
    if(s1[i] < s2[i]) {
        cout << -1;
        return 0;
    } else if(s1[i] > s2[i]) {
        cout << 1;
        return 0;
    }

    cout << 0;
  return 0;
}
