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
	int n,x;
	cin>> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n;i++) cin>> b[i];
	vector<int> aid(n), ans(n); 
	for(int i =0;i< n;i++) aid[i] = i;
        sort(aid.begin(), aid.end(), [&] (int l, int r) {
                return a[l] < a[r];
                });
        sort(b.begin(), b.end());	
	for(int i =0; i< x;i++){
		ans[aid[n-(x - i)]] = b[i];
	}
	for(int i =x;i<n;i++){
		ans[aid[i - x]] = b[i];
	}
	for(int i =0;i< n;i++){
		x -= a[i] > ans[i];
	}
	if(x==0){
		cout<<"YES"<<endl;
		for(int i =0;i< n;i++) cout<< ans[i]<<" ";
		cout<<endl;
	} else cout<<"NO"<<endl;
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
