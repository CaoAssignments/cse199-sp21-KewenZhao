#include "bits/stdc++.h"
using namespace std;
#define MAXN 2505
vector<int> xs(MAXN);
vector<int> ys(MAXN);
int sums[MAXN][MAXN] = {};
int getSum(int fromX, int toX, int fromY, int toY) {
    return sums[toX][toY] - sums[fromX - 1][toY] - sums[toX][fromY - 1] + sums[fromX - 1][fromY - 1];
}
bool compareByX(int a, int b)
{
    return (xs[a] < xs[b]);
}

bool compareByY(int a, int b)
{
    return (ys[a] < ys[b]);
}

int main(){
  //freopen("./b.in", "r", stdin);
  int n;
  cin >> n;
  vector<int> cows(n);
  for(int i = 0; i < n; i++){
    cin >> xs[i] >> ys[i];
    cows[i] = i;
  }
  //reduce axis value, keep relative position.
  sort(cows.begin(), cows.end(), compareByX);
  for (int x = 1; x <= n; x++) {
      xs[cows[x - 1]] = x;
  }
  sort(cows.begin(), cows.end(), compareByY);
  for (int y = 1; y <= n; y++) {
      ys[cows[y - 1]] = y;
  }
  for (int j = 0; j < n; j++) {
      sums[xs[j]][ys[j]]++;
  }
  // build prefix sum table
  for (int x = 0; x <= n; x++) {
      for (int y = 0; y <= n; y++) {
          if (x > 0) {
              sums[x][y] += sums[x - 1][y];
          }
          if (y > 0) {
              sums[x][y] += sums[x][y - 1];
          }
          if (x > 0 && y > 0) {
              sums[x][y] -= sums[x - 1][y - 1];
          }
      }
  }
  long answer = n + 1;
  for (int j = 0; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
          answer += getSum(min(xs[j], xs[k]), max(xs[j], xs[k]), 1, min(ys[j], ys[k]))
                  * getSum(min(xs[j], xs[k]), max(xs[j], xs[k]), max(ys[j], ys[k]), n);
      }
  }
  cout << answer;
}
