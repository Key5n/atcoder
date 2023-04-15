#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int N;
  int Q;
  cin >> N >> Q;
  int query[Q][3];
  list<int> box[N];
  for (int i = 0; i < Q; i++) {
    cin >> query[i][0] >> query[i][1];
    if (query[i][0] == 1) {
      cin >> query[i][2];
    }
  }
  set<int> card[2 * 100000];
  for (int k = 0; k < Q; k++) {
    int i = query[k][1];
    switch (query[k][0]) {
      case 1: {
        int j = query[k][2];
        box[j].push_back(i);
        card[i].insert(j);
      }
      case 2: {
        box[i].sort();
        for (int l : box[i]) {
          cout << l << " ";
        }
        cout << '\n';
      }
      case 3: {
        for (int l : card[i]) {
          cout << l << " ";
        }
      }
    }
  }
  return 0;
}