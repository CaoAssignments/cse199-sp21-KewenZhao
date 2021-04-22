#include "bits/stdc++.h"
using namespace std;
#define MAXN 1000
vector<int> xs(MAXN);
vector<int> ys(MAXN);
bool compareByX(int a, int b)
{
    return (xs[a] < xs[b]);
}

bool compareByY(int a, int b)
{
    return (ys[a] < ys[b]);
}

int main(){
  //freopen("./c.in", "r", stdin);
  int N;
  char c;
  int x;
  int y;
  cin >> N;
  vector<int> eastCows;
  vector<int> northCows;
  for(int i = 0; i < N; i++){
    cin >> c >> x >> y;
    if(c == 'E'){
      eastCows.push_back(i);
    }else{
      northCows.push_back(i);
    }
    xs[i] = x;
    ys[i] = y;
  }
  sort(eastCows.begin(), eastCows.end(), compareByY);
  sort(northCows.begin(), northCows.end(), compareByX);

  bool isStopped[MAXN] = {};
  int amtStopped[MAXN] = {};
  for (int j : eastCows) {
      for (int k : northCows) {
          if (!isStopped[j] && !isStopped[k] && xs[k] > xs[j] && ys[j] > ys[k]) {
              if (xs[k] - xs[j] > ys[j] - ys[k]) {
                  isStopped[j] = true;
                  amtStopped[k] += 1 + amtStopped[j];
              } else if (ys[j] - ys[k] > xs[k] - xs[j]) {
                  isStopped[k] = true;
                  amtStopped[j] += 1 + amtStopped[k];
              }
          }
      }
  }
  for (int j = 0; j < N; j++) {
      cout << amtStopped[j] << "\n";
  }
}
