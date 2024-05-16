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
	long long n , k; cin>> n >> k;
	vector<long long> h(n+1);
	for(int i =1;i<=n;i++) cin>> h[i];
	long long first = k + h[1];
	long long top = first + k-1, bottom = first - k+1;
	bool check = true;
	for(int i =2;i<=n;i++){
		long long ma = h[i] + k + k-1;
		long long mi = h[i] +k;
		if(i==n){
			ma = h[i]+k;
			mi = h[i]+k;
		}
		top = min(top, ma);
		bottom = max(bottom, mi);
		if(bottom > top){
			check = false;
			break;
		}
		top+= k -1;
		bottom -= k-1;
	}
	if(check) cout<<"YES"<<endl;
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
