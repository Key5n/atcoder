#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  string S;
  cin >> S;

  int x_N;
  int count_B = 0;
  int x_R;
  int count_R = 0;
  int z_K = -1;
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == 'K') {
      z_K = i;
      // cout << "K found";
    }

    if (S[i] == 'B') {
      if (count_B == 0) {
        x_N = i;
        count_B++;
        // cout << "B one found";
      } else if (count_B == 1) {
        int y_N = i;
        // cout << "B two found";
        if (!(x_N % 2 + y_N % 2 == 1)) {
          cout << "No" << endl;
          return 0;
        }
      }
    }

    if (S[i] == 'R') {
      if (count_R == 0) {
        x_R = i;
        count_R++;
        // cout << "R one found" << i;
      } else if (count_R == 1) {
        int y_R = i;
        // cout << "R two found" << i;
        if (!(x_R < z_K && z_K < y_R)) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}