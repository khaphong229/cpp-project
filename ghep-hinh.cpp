#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a, b;
vector<pair<int, int>> hcn;
bool dat(vector<int> &remain, vector<pair<int, int>> &hcn, int i, int cx){
  if(i==hcn.size()){
    return true;
  }
  int c=hcn[i].first;
  int d=hcn[i].second;
  for(int i=0; i<cx; i++){
    if(remain[i]>=c){
      remain[i]-=c;
      if(dat(remain, hcn, i+1, cx)){
        return true;
      }
      remain[i]+=c;
    }
    if(remain[i]>=d){
      remain[i]-=d;
      if(dat(remain, hcn, i+1, cx)){
        return true;
      }
      remain[i]+=d;
    }
  }
  return false;
}

int solve(vector<pair<int, int>> &hcn){
  ll sum=0;
  for(auto& canh:hcn){
    sum+=(long long) canh.first*canh.second;
  }
  int cx=sqrt(sum);
  if((long long)cx*cx!=sum){
    return 0;
  }
  vector<int> remain(cx, cx);
  return dat(remain, hcn, 0, cx) ? cx : 0;
}
int main() 
{
    int t=3;
    while(t--){
      cin >> a >> b;
        hcn.push_back({a, b});
    }
    cout << solve(hcn);
    return 0;
}