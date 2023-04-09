#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  long A;
  long B;
  cin >> A >> B;
  int res = 0;

  while (A - B != 0) {
    if (A < B) {
      int t = A;
      A = B;
      B = t;
    }

    if (B == 0) {
      break;
    }
    int x = A / B;
    if (x > 1) {
      A = A % B;
      res += x;
    } else if (x == 1) {
      A -= B;
      res++;
    }
  }
  if (A == B) {
    cout << 0 << endl;
  } else {
    cout << res - 1 << endl;
  }
  return 0;
}