#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N, A, B;
  int C[2000];
  cin >> N >> A >> B;
  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }
  int ans = A + B;
  int res;
  for (int i = 0; i < N; i++) {
    if (C[i] == ans) {
      res = i + 1;
    }
  }
  cout << res << endl;
  return 0;
}
