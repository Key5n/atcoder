#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int Replace(std::string&, const std::string&, const std::string&);

int main() {
  int H;
  int W;
  string S[100];
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }
  for (int i = 0; i < H; i++) {
    while (Replace(S[i], "TT", "PC") == 0) {
    }
    cout << S[i] << endl;
  }
  return 0;
}

int Replace(std::string& stringreplace, const std::string& origin,
            const std::string& dest) {
  size_t pos = stringreplace.find(origin);
  if (pos == string::npos) {
    return 1;
  }
  size_t len = origin.length();
  stringreplace.replace(pos, len, dest);
  return 0;
}