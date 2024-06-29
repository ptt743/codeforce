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
	int n ; cin>> n;
	vector<int> a(n+1);
	vector<int> p(n+1,-1);
	for(int i =1;i<=n;i++){
		cin>> a[i];
	}
	for(int i =2;i<=n;i++){
		p[i] = p[i-1];
		if(a[i]!=a[i-1]){
			p[i] = i-1;
		}
	}

	
	int q; cin>> q;
	while(q--){
		int l,r;
		cin>>l >> r;
		if(p[r]<l) cout<<"-1 -1"<<endl;
		else cout<< p[r] <<" "<<r<<endl;
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
