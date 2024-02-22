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
#include<cmath>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int m; cin>> m;
	vector<int> a(30,0);
	while(m--){
		int t; int v;
		cin >> t >> v;
		if(t==1){
			a[v]++;
		} else {
			for(int i =29;i>=0;i--){
				v -= (1<<i)*min(v/(1<<i),a[i]);
			}
			if(v==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			
		}
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
