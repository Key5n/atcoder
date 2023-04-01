#include <bits/stdc++.h>

#include <iostream>
using namespace std;
string s[8];
int main() {
  for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
    cin >> s[i];
  }
  int r;
  int c;
  string res = "";

  for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
    for (int j = 0; j < s[i].length(); j++) {
      if (s[i][j] == '*') {
        r = i;
        c = j;
        break;
      }
    }
  }
  if (c == 0) res += "a";
  if (c == 1) res += "b";
  if (c == 2) res += "c";
  if (c == 3) res += "d";
  if (c == 4) res += "e";
  if (c == 5) res += "f";
  if (c == 6) res += "g";
  if (c == 7) res += "h";

  if (r == 0) res += "8";
  if (r == 1) res += "7";
  if (r == 2) res += "6";
  if (r == 3) res += "5";
  if (r == 4) res += "4";
  if (r == 5) res += "3";
  if (r == 6) res += "2";
  if (r == 7) res += "1";
  cout << res << endl;

  return 0;
}