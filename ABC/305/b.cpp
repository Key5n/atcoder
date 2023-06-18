#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  map<string, int> map;
  map["A"] = 0;
  map["B"] = 3;
  map["C"] = map["B"] + 1;
  map["D"] = map["C"] + 4;
  map["E"] = map["D"] + 1;
  map["F"] = map["E"] + 5;
  map["G"] = map["F"] + 9;
  string p, q;
  cin >> p >> q;
  cout << abs(map[p] - map[q]) << endl;
}