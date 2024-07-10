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
	int n,x ,pos; 
	long long mod = 1e9 +7;
	cin>> n >> x >> pos;
	int left = 0, right = n;
	long long less = x-1;
	long long greater = n-x;
	long long ans = 1;
	int count =n-1;
	while(left< right){
		int mid = (left + right)/2;
		if(mid<=pos){
			if(mid<pos){
				ans= less*1ll*ans%mod;
				less--;
			        count--;
			}
			left = mid+1;
		} else {
			ans=greater*1ll*ans%mod;
			greater--;
			right= mid;
			count--;
		}
	}
	while(count>0) { 
		ans= count*1ll*ans%mod; 
		count--;
	}
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
