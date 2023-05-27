#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;

  for (int i = 0; i < N; i++) {
    if (S.at(i) == T.at(i)) {
      continue;
    } else if ((S.at(i) == '1' && T.at(i) == 'l') ||
               (S.at(i) == 'l' && T.at(i) == '1')) {
      continue;
    } else if ((S.at(i) == '0' && T.at(i) == 'o') ||
               (S.at(i) == 'o' && T.at(i) == '0')) {
      continue;
    } else {
      std::cout << "No\n";
      return 0;
    }
  }
  std::cout << "Yes\n";
  return 0;
}