#include "bits/stdc++.h"
using namespace std;
int32_t main(){
  freopen("moobuzz.in", "r", stdin);
  freopen("moobuzz.out", "w", stdout);
  int n;
  int arr[8] = {14,1,2,4,7,8,11,13};
  cin >> n;
  int remainder = n % 8;
  int quotient = (n-1) / 8;
  long long res = quotient * 15 +arr[remainder];
  cout << res;
}
