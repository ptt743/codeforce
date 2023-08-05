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
	int n;
	cin>> n;
	vector<long long> v(n+1), p(n+1);
	for(int i =1;i<=n;i++){
		cin>> v[i];
		p[i] = v[i];
	}
	sort(p.begin(), p.end());
	for(int i =1;i<=n;i++) {
		v[i]+= v[i-1];
		p[i]+=p[i-1];
	}
	int m;
	cin>> m;
	while(m--){
		int t,l,r;
		cin>> t>> l>> r;
		if(t==1) cout<< v[r]- v[l-1]<<endl;
		else cout<< p[r] - p[l-1]<<endl;
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
