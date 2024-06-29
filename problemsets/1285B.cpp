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
	vector<long long> DP(n+1,0);
	long long Adel =0;
	long long Yasser = 0;
	for(int i =1;i<=n;i++){
		Yasser+=a[i];
	}
	for(int i =1;i<n;i++){
		DP[i] = max(a[i], a[i] + DP[i-1]);
		Adel = max(Adel, DP[i]);
	}
	vector<long long> DP2(n+1,0);
	for(int i =2;i<=n;i++){
		DP2[i] = max(a[i], a[i] + DP2[i-1]);
		Adel = max(Adel, DP2[i]);
	}
	if(Yasser>Adel) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

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
