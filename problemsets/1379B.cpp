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
	long long l,r,m;
	cin>> l >> r >> m;
	ll calB = 0;
	for( long long i = l; i<=r;i++){
		long long temp = (m + r-l)/i;
		if( temp > 0 && temp*i<=(m +r -l) && temp*i >= (m - r + l)){
			ll cal = m - temp*i;
			ll b=0,c=0;
			if(cal>=0) c = l, b = cal + l;
			else c =r , b = cal + r;
			cout << i <<" "<<  b<<" "<< c << endl;
			return;
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
