#include "bits/stdc++.h"
using namespace std;
#define MAXN 1000005
int main(){
  freopen("sort.in", "r", stdin);
  freopen("sort.out", "w", stdout);
  int N;
  cin >> N;
  int arr[MAXN];
  int count = 0;
  int smallest = INT_MAX;
  for(int i = 0; i < N; i++) cin >> arr[i];
  for(int i = N-1; i >=0; i--){
    if(smallest < arr[i]){
      count++;
    }
    smallest = min(smallest, arr[i]);
  }
  cout << count + 1;
}
