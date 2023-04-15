#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void rotate90deg(int A[][100], int N) {
  int a[100][100];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      a[i][j] = A[i][j];
    }
  }
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      swap(a[i - 1][j - 1], A[N + 1 - j][i]);
    }
  }
  return;
}

bool checkAns(int N, int A[][100], int B[][100]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A[i][j] == 1 && B[i][j] == 0) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int N;
  int A[100][100];
  int B[100][100];
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> B[i][j];
    }
  }
  if (checkAns(N, A, B) == true) {
    cout << "Yes" << endl;
    return 0;
  };
  rotate90deg(A, N);
  if (checkAns(N, A, B) == true) {
    cout << "Yes" << endl;
    return 0;
  };
  rotate90deg(A, N);
  if (checkAns(N, A, B) == true) {
    cout << "Yes" << endl;
    return 0;
  };
  rotate90deg(A, N);
  if (checkAns(N, A, B) == true) {
    cout << "Yes" << endl;
    return 0;
  };
  cout << "No" << endl;
}
