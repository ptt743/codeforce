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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	map<string,string> mp;
	map<string,string> ans;
	int n ; cin>> n;
	for(int i =0;i< n;i++){
		string f,s; cin>> f>> s;
		if(mp[f]==""){
			mp[s] = f;
			ans[f] = s;
		} else {
			while(mp[f]!=""){
				f = mp[f];
			}
			mp[s] = f;
			ans[f] = s;
		}
	}
	cout<<ans.size()<<endl;
	for(auto it: ans) cout<< it.first<<" "<<it.second<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
