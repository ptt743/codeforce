#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n ;
	cin>> n;
	vector<long long> a(n+1);
	long long min_val = INT_MAX;
	for( int i=1;i<=n;i++) {
		cin>> a[i];
		min_val = min(min_val, a[i]);
	}
	if(a[1]== min_val)cout<<"Bob"<<endl;
	else cout<<"Alice"<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
