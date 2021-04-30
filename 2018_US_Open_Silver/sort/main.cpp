#include "bits/stdc++.h"
using namespace std;
typedef pair<int,int> ii;
int main(){
  freopen("sort.in", "r", stdin);
  freopen("sort.out", "w", stdout);
  int N;
  cin >> N;
  vector<ii> arr;
  int ans = 0;
  for(int i = 0; i < N; i++){
    int c;
    cin >> c;
    arr.push_back((ii){c,i});
  }
  sort(arr.begin(), arr.end());
  for(int i = 1; i <= N; ++i) ans=max(ans,arr[i].second-i+1);
  cout << ans;
}
