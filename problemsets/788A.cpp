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
	int n; cin>> n;
	vector<long long> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	int c = 1;
	vector<long long> bt,ct;
	for(int i = 1;i<n;i++){
		bt.push_back(abs(a[i] - a[i+1])*c);
		c*=-1;
	}
	c = -1;
	for(int i =1;i<n;i++){
		ct.push_back(abs(a[i]- a[i+1])*c);
		c*=-1;
	}
	long long maxSo = -1e9*n;
	long long maxEnd = 0;
	for(int i =0;i<bt.size();i++){
		maxEnd =maxEnd + bt[i];
		if(maxSo< maxEnd) maxSo = maxEnd;
		if(maxEnd<0) maxEnd=0;
	}
	maxEnd = 0;
	for(int i =0;i<ct.size();i++){
		maxEnd =maxEnd + ct[i];
		if(maxSo< maxEnd) maxSo = maxEnd;
		if(maxEnd<0) maxEnd = 0;
	}
 
	cout<< maxSo<<endl;	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
