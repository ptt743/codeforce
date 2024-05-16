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
	vector<long long> a(n+1), b(n+1);
	for(int i=1;i<=n;i++) cin>> a[i];
	for(int i=1;i<=n;i++) cin>> b[i];
	vector<long long> c(n+1);
	for(int i = 1;i<=n;i++){
		c[i] = a[i]*b[i] + c[i-1];
	}
	long long ans = c[n];
	for(int i =1;i<=n;i++){
		long long curr  = a[i]* b[i];
		for(int l =i-1, r = i+1; l>0 && r<=n;l--,r++){
			curr += a[l] * b[r] + a[r]*b[l];
			ans = max(ans, curr + c[l-1] + c[n] - c[r]);
		}
		curr = 0;
		for(int l = i, r=i+1; l>0 && r<=n ; l--, r++){
			curr += a[l]*b[r] + b[l]*a[r];
			ans = max(ans, curr + c[l-1] + c[n] - c[r]);
		}
	}
	cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
