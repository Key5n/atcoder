#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int N;
int Q;
int events[100][2];
int res[100];

int main() {
  cin >> N;
  cin >> Q;

  for (int i = 0; i < Q; i++) {
    cin >> events[i][0] >> events[i][1];
  }
  for (int i = 0; i < Q; i++) {
    int player_id = events[i][1] - 1;
    if (events[i][0] == 1) {
      res[player_id] += 1;
    } else if (events[i][0] == 2) {
      res[player_id] += 2;
    } else if (events[i][0] == 3) {
      if (res[player_id] >= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}