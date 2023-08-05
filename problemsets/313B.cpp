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
	string s;
	cin>> s;
	vector<int> a(s.size()+1);
	int n = s.size();
	for(int i =1;i<n;i++){
		a[i]+=a[i-1];
		if(s[i-1]==s[i]) a[i]++;
	}
	a[n] = a[n-1];
	int m;
	cin>> m;
	while(m--){
		int l, r;
		cin>> l>> r;
		cout<< a[r-1] - a[l-1]<<endl;
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	solve();
    return 0;
}
