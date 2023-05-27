#include <bits/stdc++.h>

#include <iostream>

using namespace std;
int main() {
  int N, M;
  int a[50][50] = {};
  int neighbor[50][50] = {};
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      int right;
      int left;
      int me = a[i][j] - 1;
      if (j != 0 && j != N - 1) {
        right = a[i][j + 1] - 1;
        left = a[i][j - 1] - 1;
        neighbor[me][right]++;
        neighbor[me][left]++;
      } else if (j == 0) {
        right = a[i][j + 1] - 1;
        neighbor[me][right]++;
      } else if (j == N - 1) {
        left = a[i][j - 1] - 1;
        neighbor[me][left]++;
      } else {
        cout << "ERROR!\n";
      }
    }
  }
  int res = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (neighbor[i][j] == 0) {
        res++;
      }
    }
  }
  cout << res << endl;
  return 0;
}