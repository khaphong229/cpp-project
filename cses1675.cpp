#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n, m;
int p[N], r[N];

struct Canh{
  int a, b, c;
};

bool ss(Canh a, Canh b){
  return a.c<b.c;
}
void make_root(int b){
  p[b]=b;
  r[b]=0;
}

int find_root(int b){
  if(b==p[b]){
    return b;
  }
  return p[b]=find_root(p[b]);
}

bool union_root(int a, int b){
  a=find_root(a);
  b=find_root(b);
  if(a!=b){
    if(r[a]<r[b]){
      swap(a, b);
    }
    p[b]=a;
    if(r[a]==r[b]){
      r[a]++;
    }
    return true;
  }
  return false;
}

ll kruskal(int n, vector<Canh> &canhs){
  for(int i=1; i<=n; i++){
    make_root(i);
  }
  sort(canhs.begin(), canhs.end(), ss);
  
  ll sum=0;
  int tmp=n;
  for(Canh x : canhs){
    if(union_root(x.a, x.b)){
      sum+=x.c;
      if(--tmp == 1){
        return sum;
      }
    }
  }
  return tmp==1 ? sum : -1;
}

int main(){
  cin >> n >> m;
  vector<Canh> canhs(m+1);
  for(int i=0; i<m; i++){
    cin >> canhs[i].a >> canhs[i].b >> canhs[i].c;
  }
  ll res=kruskal(n, canhs);
  if(res==-1){
    cout << "IMPOSSIBLE" << endl;
  }else{
    cout << res;
  }
  return 0;
}