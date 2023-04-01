#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int N;
string S;
int main() {
  cin >> N;
  cin >> S;
  for (int i = 0; i < N - 1; i++) {
    if (N == 0) {
      break;
    } else if ((S[i] == 'F' && S[i + 1] != 'M') ||
               (S[i] == 'M' && S[i + 1] != 'F')) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}