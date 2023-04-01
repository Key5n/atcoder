#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int N;
int X;
int A[2 * 100000];

int main() {
  vector<int> v;
  cin >> N;
  cin >> X;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    v.push_back(A[i]);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < N; i++) {
    if (binary_search(v.begin(), v.end(), A[i] + X)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
