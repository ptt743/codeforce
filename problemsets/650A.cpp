#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ; cin>> n;
	vector<pair<ll,ll>> a;
	map<ll,ll> mx;
	map<ll,ll> my;
	map<pair<ll,ll>, ll> mxy;
	for(int i =0;i< n;i++){
		long long x,y ; 
		cin>> x >> y;
		mx[x]++;
		my[y]++;
		mxy[make_pair(x,y)]++;
		a.push_back(make_pair(x,y));
	}
	ll ans= 0;
	for(auto item : mx) ans += (item.second -1)* item.second /2;
	for(auto item: my) ans += (item.second -1)*item.second/2;
	for(auto item: mxy) ans -= item.second * (item.second-1)/2;
	cout<< ans <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
