#include "bits/stdc++.h"
using namespace std;
typedef struct node{
  int x;
  int w;
  int d;
  node(int x, int w, int d):x(x), w(w), d(d){}
}cow;

typedef pair<int,int> ii;

bool comp(cow a, cow b){
  return a.x < b.x;
}
int32_t main(){
  //std::__fs::filesystem::current_path("./2019_Dec_Silver/meetings"); //setting path
  freopen("meetings.in", "r", stdin);
  freopen("meetings.out", "w", stdout);
  int N,L;
  cin >> N >> L;
  vector<cow> v;
  int right_pt = 0, left_pt = 0, total_weight=0;
  for(int i = 0; i < N; i++){
    int w,x,d;
    cin >> w >> x >> d;
    total_weight += w;
    if(d == -1) right_pt++;
    v.push_back((cow){x,w,d});
  }
  sort(v.begin(), v.end(), comp);
  // for(auto x: v){
  //   printf("%d, %d, %d\n",x.x, x.w, x.d );
  // }

  vector<ii> vv;
  for(int i = 0; i < N; i++){
    int weight,dist;
    if(v[i].d == 1){
      weight = v[right_pt++].w;
      dist = L - v[i].x;
    }
    else{
       weight = v[left_pt++].w;
       dist = v[i].x;
    }
    vv.push_back((ii){dist,weight});
  }
  sort(vv.begin(), vv.end());
  // for(auto x: vv){
  //   printf("%d, %d\n",x.first, x.second );
  // }
  int T = 0;
  for(auto x: vv){
    total_weight -= 2 * x.second;
    if(total_weight <= 0){
      T = x.first;
      break;
    }
  }
  //cout << T << '\n';
  queue<cow> q;
  int res = 0;
  for(auto x: v){
    if(x.d == -1){
      while(!q.empty() && q.front().x+2*T < x.x  ) q.pop();
      res += q.size();
    } else{
      q.push(x);
    }
  }
  cout << res;
}
