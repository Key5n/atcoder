#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define GET_MACRO(_1, _2, _3, _4, _5, NAME, ...) NAME
#define rep(...) GET_MACRO(__VA_ARGS__, rep5, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rep1(n) rep2(_, n)
#define rep2(i, n) rep3(i, 0, n)
#define rep3(i, a, n) rep4(i, a, n, 1)
#define rep4(i, a, n, d) rep5(i, a, n, d, <)
#define rep5(i, a, n, d, o) for (auto i = decltype(n)(a), _n = (n); i o _n; i += (d))

int n, t, m;
int dame[10][10];
int ans;
vector<vector<int>> a;

void dfs(int pos)
{
  if (pos == n)
  {
    if (a.size() == t)
      ans++;
    return;
  }
  int size = a.size();
  rep(i, 0, size) if (all_of(a[i].begin(), a[i].end(), [&](int x)
                             { return dame[x][pos] == 0; }))
  {
    a[i].push_back(pos);
    dfs(pos + 1);
    a[i].pop_back();
  }
  a.push_back({pos});
  dfs(pos + 1);
  a.pop_back();
}

int main()
{
  cin >> n >> t >> m;

  rep(i, 0, m)
  {
    int x, y;
    cin >> x >> y;
    x--, y--;
    dame[x][y] = dame[y][x] = 1;
  }

  dfs(0);
  cout << ans << endl;
}
