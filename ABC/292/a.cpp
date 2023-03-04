#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;
  std::transform(S.begin(), S.end(), S.begin(), ::toupper);
  cout << S << endl;
}