#include <bits/stdc++.h>

#include <atcoder/all>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a < c) {
    cout << "Takahashi" << endl;
    return 0;
  }
  if (a > c) {
    cout << "Aoki" << endl;
    return 0;
  }
  if(b > d) {
    cout << "Aoki" << endl;
    return 0;
  }
  cout << "Takahashi" << endl;
  return 0;
}
