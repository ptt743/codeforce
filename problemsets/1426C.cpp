#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

 
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	long long n;
	 cin>> n;
	 long long result =0;
	 long long ans = 1e9;
	 for(long long i = 1;i*i <= n;i++){
	 	ans = min(ans, i-1 + (n-i)/i + ((n-i)%i?1:0));
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
