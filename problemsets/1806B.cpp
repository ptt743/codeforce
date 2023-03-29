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
	int n;
  cin>> n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		if(v[(n+1)/2]==0) {
			if(v[n-1]==1) cout<<"2"<<endl;
			else cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
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
