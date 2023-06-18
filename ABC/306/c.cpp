#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int N;
  int A[3 * 100000];
  int num[100000];
  cin >> N;

  for (int i = 0; i < 3 * N; i++)
  {
    cin >> A[i];
  }

  bool isFirst = true;
  for (int i = 0; i < 3 * N; i++)
  {
    int v = A[i];
    num[v - 1]++;
    if (num[v - 1] == 2)
    {
      if (isFirst)
      {
        cout << v;
        isFirst = false;
      }
      else
      {
        cout << " " << v;
      }
    }
  }
  cout << "\n";
  return 0;
}