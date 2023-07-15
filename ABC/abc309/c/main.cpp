#include <bits/stdc++.h>
using namespace std;
typedef int long long;
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N);
  ll initial = 0;
  vector<pair<int, ll>> intake;

  for (int i = 0; i < N; i++)
  {
    cin >> a[i] >> b[i];
    initial += (ll)b[i];
    intake.push_back({a[i], -b[i]});
  }
  intake.push_back({0, initial});
  sort(intake.begin(), intake.end());

  ll sum = 0;

  for (int i = 0; i < intake.size(); i++)
  {
    sum += intake[i].second;
    if (sum <= K)
    {
      cout << intake[i].first + 1 << endl;
      return 0;
    }
  }
  return 0;
}