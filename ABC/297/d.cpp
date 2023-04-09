#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  long long A;
  long long B;
  cin >> A >> B;
  long long res = 0;

  if (A < B) {
    swap(A, B);
  }

  while (B > 0) {
    /*
    int x = A / B;
    res += x;
    とするとエラー
    xをlong longにすると直る
    intを使うなくそが
    */
    A %= B;
    res += x;
    swap(A, B);
  }
  cout << res - 1 << endl;
  return 0;
}