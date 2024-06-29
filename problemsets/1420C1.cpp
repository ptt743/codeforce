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
inline int64_t calc(const vector<int> &a) {
	int n = a.size();
	vector<int64_t> d1(n+1), d2(n+1);
	d1[0] = -static_cast<int64_t>(1e18);
	d2[0] = 0;
	for (int i = 0; i < n; ++i) {
		d1[i+1] = max(d1[i], d2[i] + a[i]);
		d2[i+1] = max(d2[i], d1[i] - a[i]);
	}
	return max(d1.back(), d2.back());
}
void solve(){
	int n, q; cin>> n >> q;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	cout<< calc(a)<<endl;
}

void solve2(){
	int n, q; cin>> n >> q;
	vector<long long>a(n+1,0);
	for(int i =1;i<=n;i++) cin>> a[i];
	vector<vector<long long>> dp(n+1,vector<long long>(2,0));
	dp[0][0] = -1e9;
	dp[0][1] = 0;
	for(int i =1;i<=n;i++){
		for(int j =0;j<=1;j++){
			long long temp = (j%2==0)?a[i]:((-1)*a[i]);
			dp[i][j] = max(dp[i-1][j],dp[i-1][1-j] + temp); 
		}
	}
	cout<< max(dp[n][1] , dp[n][0])<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve2();
    }
    return 0;
}
