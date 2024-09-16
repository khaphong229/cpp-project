#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

bool sort_end(pair<int,int> &p1, pair<int,int> &p2){
	return p1.second < p2.second;
}
int main(){
	int t;
	cin >> t;
	vector<pair<int,int>> movies(t);
	for(int i=0; i<t;i++){
		cin >> movies[i].first >> movies[i].second;
	}
	sort(movies.begin(),movies.end(),sort_end);
	int cnt=0, res=0;
	for(int i=0;i<t;i++){
		if(movies[i].first>=res){
			cnt++;
			res=movies[i].second;
		}
	}
	cout << cnt << endl;
	return 0;
}