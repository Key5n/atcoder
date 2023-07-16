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

int main()
{
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N >> M;
  vector<int> P(N);
  vector<int> C(N);
  vector<set<int>> F(N);
  rep(i, N)
  {
    int Pi, Ci;
    cin >> Pi >> Ci;
    C.at(i) = Ci;
    P.at(i) = Pi;

    rep(Ci)
    {
      int tmp;
      cin >> tmp;
      F.at(i).insert(tmp);
    }
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (P.at(i) < P.at(j))
      {
        continue;
      }
      bool isFailure = false;
      for (auto f : F.at(i))
      {
        if (F.at(j).end() == F.at(j).find(f))
        {
          isFailure = true;
          break;
        }
      }
      if (isFailure)
      {
        continue;
      }
      if (P.at(i) <= P.at(j) && F.at(i).size() >= F.at(j).size())
      {
        continue;
      }

      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";

  return 0;
}
