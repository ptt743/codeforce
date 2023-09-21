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
	int n ;
	cin>> n;
	vector<long long> a(n);
	long long sum_e=0, sum_o=0;
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.rbegin(), a.rend());
	for(int i =0;i< n;i++){
		if(i%2==0 && a[i]%2==0) sum_e+=a[i];
		else if ( i%2!=0 && a[i]%2!=0) sum_o+=a[i];
	}
	if(sum_o>sum_e) cout<<"Bob"<<endl;
	else if (sum_e> sum_o) cout<<"Alice"<<endl;
	else cout<<"Tie"<<endl;
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
