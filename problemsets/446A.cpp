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
	vector<int> f(n+1);
	for(int i =1;i<=n;i++){
		f[i] = 1;
		if(a[i]>a[i-1]) f[i] = f[i-1] +1;
	}
	int ans = 1;
	for(int i =1;i<=n;i++){
		ans = max(min(f[i]+1,n), ans);
	}
	for(int i =1;i<=n;i++){
		if(a[i-f[i]+2] - a[i - f[i]]>1) ans = max(ans, f[i] + f[ i - f[i]]);
		if(a[i-f[i]+1] - a[i-f[i]-1]>1) ans = max(ans, f[i] + f[i - f[i]]);
	}
	cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
