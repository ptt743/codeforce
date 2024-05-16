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

const int INF = 1000000005;

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n; cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin >> a[i];
	int t1 = INF, t2 = INF;
	int ans  =0;
	for(int i =0;i<n;i++){
		if(t1>t2) swap(t1,t2);
		if(a[i]<=t1) t1 = a[i];
		else if(a[i]<=t2) t2 = a[i];
		else {
			t1 = a[i];
			ans++;
		}
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
