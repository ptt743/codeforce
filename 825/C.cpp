#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

void solve(){
	int n ;
	cin>>n;
	vector<long long> a(n);
	for( int i=0;i<n;i++) cin>>a[i];
	vector<long long> dp(n+1,0);
	for( int i=1;i<=n;i++) dp[i] = min(dp[i-1] +1, a[i-1] );
	long long result=0;
	for( int i=1;i<=n;i++) result+= dp[i];
	cout<<result<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
