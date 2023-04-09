#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N;
  int D;
  int T[100];
  cin >> N >> D;

  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }
  for (int i = 1; i < N; i++) {
    if (T[i] - T[i - 1] <= D) {
      cout << T[i] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}