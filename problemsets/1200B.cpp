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
	int n, m, k;
	cin>> n >> m >> k;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	bool check = true;
	for(int i =0;i< n-1;i++){
		if(a[i]>= a[i+1]){
			int temp= a[i] - a[i+1];
			if(k<= a[i+1]) temp += k;
			else temp += a[i+1];
			m += temp;
		} else {
			if(a[i+1] - a[i] <= k){
				if(a[i+1]>=k) m += k - (a[i+1] - a[i]);
				else m += a[i];
			} else{
				if( m >= a[i+1] - k - a[i]) 
					m -= a[i+1] - k - a[i];
				else {
					check = false;
					break;
				}
			}
		}
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
