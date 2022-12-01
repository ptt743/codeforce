#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}
int solve(){
	int n;
	cin>> n;
	vector<long long> a(n+1);
	long long p =0;
	for( int i=1;i<=n;i++) cin>> a[i], p = gcd(a[i],p);
	if( p==1) return 0;
	if(gcd(n,p)==1) return 1;
	if(gcd(n-1,p)==1)return 2;
	return 3;
	
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
