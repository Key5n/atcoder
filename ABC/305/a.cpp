#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int res = N * 2 + 5;

  res = (res - (res % 10)) / 2;
  cout << res << endl;
  return 0;
}