#include <bits/stdc++.h>

#include <iostream>
using namespace std;

char H, W;
vector<vector<char>> C;
int main() {
  cin >> H >> W;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> C.at(i).at(j);
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (C.at(i).at(j) == '#') {
      }
    }
  }
}
