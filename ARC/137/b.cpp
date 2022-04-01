#include <bits/stdc++.h>
 
using namespace std;
 
int n;
int a[300000];
int count_0(int i, int number_of_following_0) {
  if (a[i] == 0) {
    number_of_following_0++;
  }
  if (i == n - 1 || a[i] == 1) {
    return number_of_following_0;
  }
  return count_0(i + 1, number_of_following_0);
}
 
int count_1(int i, int number_of_following_1) {
  if (a[i] == 1) {
    number_of_following_1++;
  }
  if (i == n - 1 || a[i] == 0) {
    return number_of_following_1;
  }
  return count_1(i + 1, number_of_following_1);
}
 
int main() {
  int max_0 = 0;
  int max_1 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
 
  for (int i = 0; i < n; i++) {
    int res0 = count_0(i, 0);
    int res1 = count_1(i, 0);
    if (max_0 < res0) {
      max_0 = res0;
    }
    if (max_1 < res1) {
      max_1 = res1;
    }
  }
  cout << max_0 + max_1 + 1 << endl;
  return 0;
}
