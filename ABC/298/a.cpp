#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N;
  string S;
  cin >> N >> S;
  int count_o = 0;
  int count_hy = 0;
  int count_x = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'o') {
      count_o++;
    } else if (S[i] == '-') {
      count_hy++;
    } else if (S[i] == 'x') {
      count_x++;
    }
  }
  if (count_o > 0 && count_x == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}