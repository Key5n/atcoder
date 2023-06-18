#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int H, W;
  char S[500][500];

  cin >> H >> W;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      cin >> S[i][j];
    }
  }
  int num_R[500];
  int num_C[500];

  for (int i = 0; i < H; i++)
  {
    int num_row = 0;
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == '#')
      {
        num_row++;
      }
    }
    num_R[i] = num_row;
  }

  for (int j = 0; j < W; j++)
  {
    int num_column = 0;
    for (int i = 0; i < H; i++)
    {
      if (S[i][j] == '#')
      {
        num_column++;
      }
    }
    num_C[j] = num_column;
  }
  int max = num_R[0];
  for (int i = 0; i < H; i++)
  {
    if (max < num_R[i])
    {
      max = num_R[i];
    }
  }
  int second_max_id_R = 0;
  for (int i = 0; i < H; i++)
  {
    if (num_R[i] == max - 1)
    {
      second_max_id_R = i;
    }
  }

  max = 0;
  for (int i = 0; i < W; i++)
  {
    if (max < num_C[i])
    {
      max = num_C[i];
    }
  }
  int second_max_id_C = 0;
  for (int i = 0; i < W; i++)
  {
    if (num_C[i] == max - 1)
    {
      second_max_id_C = i;
    }
  }

  cout << second_max_id_R + 1 << " " << second_max_id_C + 1 << endl;
}