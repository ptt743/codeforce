#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,m;
	cin>> n >> m;
	vector<int> count(m,0);
	bool ch = true;
	for(int i =0;i< n;i++){
		vector<int> dis(2*m,1e4+2);
		string s;
		cin>> s;
		s = s+s;
		bool check = false;
		for(int j=0;j<2*m;j++){
			if(s[j]=='1'){ check = true; dis[j] = 0;}
		}
		ch&=check;
		for(int j =1;j<2*m;j++) dis[j] = min(dis[j], dis[j-1]+1);
		for(int j =  2*m-2;j>=0;j--) dis[j] = min(dis[j], dis[j+1]+1);
		for(int j =0;j< m;j++) count[j] += min(dis[j], dis[j+m]);
	}
	int res = INT_MAX;
	for(int i =0;i<m;i++) res = min(res,count[i]);
	if(!ch) {cout<<"-1"<<endl;;return;}
	cout<< res<<endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	solve();
    return 0;
}
