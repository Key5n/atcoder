#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  vector<set<int>> neighbor(9);
  for (int i = 1; i <= 9; i++)
  {
    if ((i - 1) % 3 == 0)
    {
      neighbor.at(i - 1).insert(i + 1);
    }
    if ((i - 1) % 3 == 1)
    {
      neighbor.at(i - 1).insert(i - 1);
      neighbor.at(i - 1).insert(i + 1);
    }
    if ((i - 1) % 3 == 2)
    {
      neighbor.at(i - 1).insert(i - 1);
    }
  }
  if (neighbor.at(A - 1).find(B) != neighbor.at(A - 1).end())
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
}
