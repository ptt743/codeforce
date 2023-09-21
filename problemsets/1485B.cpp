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
	long long n,q,k;
	cin>> n>> q>>k;
	vector<long long> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	vector<long long> del(n+1);
	for(int i =2;i< n;i++){
		del[i] = a[i+1] - a[i-1]-1 + del[i-1]-1;
	}
	while(q--){
		int l, r;
		cin>> l >> r;
		if(l==r){ cout<< k-1<< endl;continue;}
		long long ans = del[r-1] - del[l];
		ans += a[l+1]- 2;
		ans += k - a[r-1]-1;
		cout<< ans<< endl;

	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
