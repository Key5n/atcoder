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

const int MAXN = 10;

bool conflict[MAXN][MAXN];
int team[MAXN];
int N, T, M;

int dfs(int player)
{
  if (player == N)
    return 1;
  int total = 0;
  for (int t = 0; t < T; t++)
  {
    bool ok = true;
    for (int i = 0; i < N; i++)
    {
      if (team[i] == t && conflict[player][i])
      {
        ok = false;
        break;
      }
    }
    if (!ok)
      continue;
    team[player] = t;
    total += dfs(player + 1);
    team[player] = -1;
  }
  return total;
}

int main()
{
  cin >> N >> T >> M;
  for (int i = 0; i < M; i++)
  {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    conflict[A][B] = conflict[B][A] = true;
  }
  for (int i = 0; i < N; i++)
    team[i] = -1;
  int ans = dfs(0);
  cout << ans << "\n";
  return 0;
}
