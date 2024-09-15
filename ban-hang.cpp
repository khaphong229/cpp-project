#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() 
{
    cin >> a>> b >> c;
    unordered_map<string, vector<int>> mp;
    vector<string> order;
    
    for(int i=0; i<3; i++){
      int gd=(i==0) ? a : (i==1) ? b : c;
      for(int j=0; j<gd; j++){
        string id;
        int amount;
        cin >> id >> amount;
        if(mp.find(id)==mp.end()){
          mp[id]=vector<int> (3,0);
          order.push_back(id);
        }
        mp[id][i]+=amount;
      }
    }
    vector<string> res;
    // for(string &id:order){
    //   int sum=mp[id][0]+mp[id][1]+mp[id][2];
    //   if(sum>=20 && mp[id][0] && mp[id][1] && mp[id][2]){
    //     res.push_back(id);
    //   }
    // }
    for(string &id: order){
      if(mp[id][0]>=20 && mp[id][1]>=20 && mp[id][2]>=20){
        res.push_back(id);
      }
    }
    cout << res.size() << ' ';
    for(string& id : res){
      cout << id << ' ';
    }
    return 0;
}