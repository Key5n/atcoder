#include <bits/stdc++.h>

using namespace std;
int n;
int c[100000];
int p[100000];
int q;
int l[100000];
int r[100000];
int Sa[100000];
int Sb[100000];
int a[100000];
int b[100000];

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> c[i] >> p[i];
  }
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    scanf("%d", &l[i]);
    scanf("%d", &r[i]);
  }
  Sa[0] = p[0];
  for (int i = 0; i < n; i++)
  {
  }
  for (int i = 0; i < q; i++)
  {
    for (int j = l[i] - 1; j < r[i]; j++)
    {
      if (c[j] == 1)
      {
        a[i] += p[j];
        continue;
      }
      b[i] += p[j];
    }
    cout << a[i] << ' ' << b[i] << endl;
  }
  return 0;
}