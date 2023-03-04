#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string t;
  cin >> n >> t;
  int x = 0;
  int y = 0;
  int dx = 1;
  int dy = 0;

  int s = 0;
  for(char& c : t){
    if(c == 'S'){
      x += dx;
      y += dy;
    }
    if(c == 'R'){
      s = dy;
      dy = dx;
      dx = -s;
    }
  }
  cout << x << ' ' << y << endl;
}