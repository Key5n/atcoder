#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool isSame(vector<vector<char>> a, vector<vector<char>> b) {
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a.size(); j++) {
      if (a[i][j] != b[i][j]) {
        return false;
      }
    }
  };
  return true;
}

vector<int> numOfSharps(vector<vector<char>> a) {
  vector<int> res;
  for (int i = 0; i < a.size(); i++) {
    int num = 0;
    for (int j = 0; j < a.size(); j++) {
      if (a[i][j] == '#') {
        num++;
      }
      res.push_back(num);
    }
  }
  return res;
}

vector<vector<char>> verticalShift(vector<vector<char>> a) {
  vector<vector<char>> res;
  copy(a.begin(), a.end(), res.begin());
  vector<char> s = a.at(a.size() - 1);
  for (int i = 0; i < a.size() - 1; i++) {
    res.at(i + 1) = a.at(i);
  }
  res.at(0) = s;
  return res;
}

vector<vector<char>> horizontalShift(vector<vector<char>> a) {
  for (int i = 0; i < a.size(); i++) {
    char last = a[i][a.at(0).size() - 1];
    for (int j = 0; j < a.at(0).size() - 1; j++) {
      a[i][j + 1] = a[i][j];
    }
    a[i][0] = last;
  }
  return a;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> a(H, vector<char>(W));
  vector<vector<char>> b(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> b.at(i).at(j);
    }
  }
  for (int i = 0; i < H; i++) {
    if (isSame(a, b)) {
      cout << "Yes\n";
      return 0;
    }
    if (i == H - 1) {
      cout << "No\n";
      return 0;
    }
    if (numOfSharps(a) == numOfSharps(b)) {
      break;
    }
    verticalShift(a);
  }
  for (int i = 0; i < H; i++) {
    if (i == W - 1) {
      cout << "No\n";
      return 0;
    }
    if (isSame(a, b)) {
      break;
    }
    horizontalShift(a);
  }
  cout << "Yes\n";
  return 0;
}
