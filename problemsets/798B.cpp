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
	int n; cin>> n;
	vector<string> a(n+1);
	map<string,int> mp;
	map<string,int> count;
	for(int i =1;i<=n;i++) cin>> a[i];
	for(int i =1;i<=n;i++){
		set<string> st;
		for(int j =0;j<a[i].size();j++){
			string temp = a[i].substr(j) + a[i].substr(0,j);
			if(st.find(temp)==st.end()){
				st.insert(temp);
				count[temp]++;
				mp[temp]+=j;
			}
		}
	}
	int ans = 1e9;
	for( auto &pair:mp){
		if(count[pair.first]==n){
			ans = min(ans, pair.second);
		}
	}
	cout<< ((ans==1e9)?(-1):ans)<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
