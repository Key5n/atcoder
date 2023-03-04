#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int N;
int res = 0;

int main() {
  cin >> N;

  for (int i = 1; i <= N - 1; i++) {
    int X = i;
    int Y = N - i;
    int x = 0;
    int y = 0;

    for (int j = 1; j * j <= X; j++) {
      if (X % j == 0) {
        x++;
        if (j * j != X) {
          x++;
        }
      }
    }
    for (int j = 1; j * j <= Y; j++) {
      if (Y % j == 0) {
        y++;
        if (j * j != Y) {
          y++;
        }
      }
    }
    res += x * y;
  }
  cout << res << endl;
  return 0;
}