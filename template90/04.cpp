#include <bits/stdc++.h>
#include <algorithm>

using  namespace std;
int h, w;
int a[2009][2009];
int row[2009], column[2009];
int answer[2009][2009];

int main(){
  cin >> h >> w;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      row[i] += a[i][j];
      column[j] += a[i][j];
    }
  }
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      answer[i][j] = row[i] + column[j] - a[i][j];
      cout << answer[i][j];
      if(j != w-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}