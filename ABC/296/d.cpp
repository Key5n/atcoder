#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int N;
int M;

int main() {
  cin >> N;
  cin >> M;
  if (M > N * N) {
    cout << -1 << endl;
    return 0;
  }
  for (int i = M;; i++) {
    vector<int> v;
    for (int j = 1; j * j <= i; j++) {
      if (i % j == 0) {
        v.push_back(j);
      }
    }

    for (int x : v) {
      cout << x << endl;
    }
  }
}