#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  unsigned long long res = 0;
  unsigned long long v;
  for (int i = 0; i < 64; i++)
  {
    cin >> v;
    res += v << i;
  }
  cout << res << endl;

  return 0;
}