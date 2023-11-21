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
	long long n,k;
	cin>> n >> k;
	vector<int> a(n+1);
	vector<long long > h(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	for(int i =1;i<=n;i++) cin>> h[i];

	for(int i=1 ;i<=n;i++) a[i]+=a[i-1];

	int l = n, r=n;
	int ans = 0;
	for(;l>0;l--){
		if(l<n && h[l]%h[l+1]!=0) {
			r = l;
			if(a[r] - a[l-1]<=k) ans = max(ans, r-l+1);
			continue;
		} else {
			if(a[r] - a[l-1] >k)
				while(r>l && a[r] - a[l-1]>k) r--;	
			if(a[r] - a[l-1] <=k)ans = max(ans, r-l+1);

		}
	}
	cout<< ans <<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
