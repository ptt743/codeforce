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
	int n ; cin>> n;
	vector<long long> a(n +1,0);
	for(int i =1;i<=n;i++) cin>> a[i];
	string s; cin>> s;
	s = " "+ s;
	vector<long long> ans(2,0);
	vector<long long> pref(n+1,0);
	for(int i = 1;i<=n;i++){
		ans[s[i] - '0']^=a[i];
		pref[i] = pref[i-1]^a[i];
	}
	int q; cin>> q;
	long long mass = 0;
	while(q--){
		int t;
		cin>> t;

		if(t==1){
			int x,y; cin>> x >> y;
			mass ^= pref[y]^pref[x-1];
		} else {
			int z; cin>> z;
			cout<< (ans[z]^mass)<<endl;
		}
	}
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
