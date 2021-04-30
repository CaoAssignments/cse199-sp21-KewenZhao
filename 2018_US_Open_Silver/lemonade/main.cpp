#include "bits/stdc++.h"
using namespace std;
#define MAXN 1000005
int main(){
  freopen("lemonade.in", "r", stdin);
  freopen("lemonade.out", "w", stdout);
  int N;
  cin >> N;
  vector<int> arr(N);
  for(int i = 0; i < N; i++) cin >> arr[i];
  sort(arr.begin(),arr.end(),greater<int>() ) ;
  int i;
  for(i = 0; i < N; i++){
    if(arr[i] < i) break;
  }
  cout << i;
}
