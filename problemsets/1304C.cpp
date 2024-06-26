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
	long long m;
	cin>> n>> m;
	long long left = m, right = m;
	int pre = 0;
	bool check  = true;
	for(int i =0;i< n;i++){
		long long t,l,r;
		cin>> t >> l >> r;
		long long add = t - pre;
		left -= add; right+=add;
		if(right<l || left > r) {
			check = false;
		}
		left = max(left,l);
		right = min(right,r);
		pre = t;
	}
	if(check)cout<<"YES"<<endl;
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
