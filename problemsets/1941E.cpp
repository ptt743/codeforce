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
	int n,m,k,d;
	cin>> n >> m >> k >> d;
	vector<long long> a(n+1,0);
	for(int i =0;i< n;i++){
		vector<long long> dp(m, 1e9);
		vector<int> v(m);
		multiset<long long> mst = {1};
            	dp[0] = 1;
            	cin >> v[0];
		for (int j = 1; j < m - 1; j++) {
			cin >> v[j];
			dp[j] = *mst.begin() + v[j] + 1;
			if (j - d - 1 >= 0)
				mst.erase(mst.find((dp[j - d - 1])));
			mst.insert(dp[j]);
		}
		cin >> v.back();
		dp[m-1] = 1 + *mst.begin();
		a[i+1] = dp.back();
	}
	for(int i =1;i<=n;i++){
		a[i] +=a[i-1];
	}
	long long ans = 2e11;
	for(int i =k;i<=n;i++){
		ans = min(ans, a[i] - a[i-k]);
	}
	cout<< ans<<endl;
	

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
