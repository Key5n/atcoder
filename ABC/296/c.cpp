#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int N;
int X;
int A[2 * 100000];

int main() {
  cin >> N >> X;

  set<int> s;
  for (int i = 0; i < N; i++) {
    int t;
    cin >> t;
    s.insert(t);
  }
  for (auto a : s) {
    if (s.find(a + X) != s.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
