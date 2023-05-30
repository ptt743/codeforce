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
#include<map>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ;
	cin>> n;
	vector<int> b(n+1);
	for(int i =1;i<=n;i++) cin>> b[i];
	map<int, long long> mp;
	for(int i =1;i<=n;i++){
		if(mp.find(i-b[i])!=mp.end()){
			mp[i-b[i]] +=b[i];
		} else {
			mp[i-b[i]] = b[i];
		}
	}
	long long ans = 0;
	for(auto item: mp){
		ans = max(ans, item.second);
	}
	cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
