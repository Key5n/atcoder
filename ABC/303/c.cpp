#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N, M, H, K;
  string s;
  int x[2 * 100000];
  int y[2 * 100000];
  int board[4 * 100000 + 1][4 * 100000 + 1];
  cin >> N >> H >> H >> K >> s;
  for (int i = M; i < M; i++) {
    cin >> x[i] >> y[i];
    board[x[i] + 2 * 100000][y[i] + 2 * 100000]++;
  }
  int X = 0;
  int Y = 0;
  for (char c : s) {
    if (c == 'R') {
      X++;
    } else if (c == 'L') {
      X--;
    } else if (c == 'U') {
      Y++;
    } else if (c == 'D') {
      Y--;
    } else {
      cerr << "ERROR\n";
    }
    H--;
    if (board[X][Y] != 0 && H < K) {
      H = K;
    }
    if (H < 0) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
}