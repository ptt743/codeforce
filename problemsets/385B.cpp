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
	string s;
	cin>> s;
	int n = s.size();
	vector<pair<int,int>> indexs;
	for(int i =0;i<n-3;i++){
		string temp = s.substr(i,4);
		if(temp=="bear")
			indexs.push_back(make_pair(i,i+3));
	}
	int pre = 0;
	int ans =0;
	for(int i =0;i< indexs.size();i++){
		ans += (indexs[i].first-pre+1)*(n- indexs[i].second);
		pre = indexs[i].first +1;
	}
	cout<<ans<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
