#include <bits/stdc++.h>

using namespace std;
 
int main() {
  long l, r;
  cin >> l >> r;
  for (long sub = r - l; sub > 0; sub--) {
    for (long x = l; x < r; x++) {
      long y = x + sub;
      if(y > r) break;
      if (gcd(x, y) == 1) {
        cout << sub << endl;
        return 0;
      }
    }
  }
  return 0;
}