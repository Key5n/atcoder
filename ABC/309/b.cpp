#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  vector<vector<char>> ans(N, vector<char>(N));

  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      ans.at(i).at(j) = A.at(i).at(j);
      if (i == 0)
      {
        if (j != 0)
        {
          ans.at(i).at(j) = A.at(i).at(j - 1);
        }
      }
      if (i == N - 1)
      {
        if (j != N - 1)
        {
          ans.at(i).at(j) = A.at(i).at(j + 1);
        }
      }

      if (j == 0)
      {
        if (i != N - 1)
        {
          ans.at(i).at(j) = A.at(i + 1).at(j);
        }
      }
      if (j == N - 1)
      {
        if (i != 0)
        {
          ans.at(i).at(j) = A.at(i - 1).at(j);
        }
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << ans.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}