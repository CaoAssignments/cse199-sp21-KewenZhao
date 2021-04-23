#include "bits/stdc++.h"
using namespace std;
#define MAXN 100005

char milk[MAXN];
int num = 1;
int comp[MAXN] = {};
vector<vector<int>> AdjList(MAXN);
void dfs(int a){
  if(comp[a] != 0) return;
  comp[a] = num;
  for(int b: AdjList[a]){
    if(milk[b] == milk[a]) dfs(b);
  }
}
int main(){
  //std::__fs::filesystem::current_path("./2019_Dec_Silver/milkvisits"); //setting path
  freopen("milkvisits.in", "r", stdin);
  freopen("milkvisits.out", "w", stdout);
  int N,M;
  cin >> N >> M;
  string s;
  cin >> s;
  for(int i = 0; i < N; i ++){
    milk[i+1] = s[i];
  }
  for(int i = 0; i < N - 1; i++){
    int a, b;
    cin >> a >> b;
    AdjList[a].push_back(b);
    AdjList[b].push_back(a);
  }
  for(int i = 1; i <= N; i++){
    dfs(i);
    num++;
  }
  for(int i = 0; i < M; i++){
    int a, b;
    char c;
    cin >> a >> b >> c;
    if(comp[a] == comp[b] && milk[a] != c){
      cout << 0;
    } else{
      cout << 1;
    }
  }

}
