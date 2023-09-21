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
	int n,c;
	long long t;
	cin>> n >> t >> c;
	vector<long long> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	int l =1,r=1;
	int count = 0;
	int ans = 0;
	while(r<=c){
		if(a[r]<=t) count++;
		r++;
	}
        if(count==c) ans =1;
	for(;r<=n;r++){
		if(a[r]<=t) count++;
		if(a[l]<=t) count--;
		l++;
		if(count==c) ans++;
	}
	cout<<ans<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
