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
	int n,m; cin>> n >> m;
	vector<pair<int,int>> s;
	for(int i =1;i<=m;i++){
		int x, y;
		cin>> x >> y;
		s.push_back(make_pair(x-1,y));
	}
	int q; cin>> q;
	vector<int> index(q+1);
	for(int i =1;i<=q;i++) cin>> index[i];
	int left = 1, right = q;
	while(left<=right){
		int mid = (left+right)/2;
		vector<int> curr(n+1,0);
		for(int i =1;i<=mid;i++){
			curr[index[i]] = 1;
		}
		vector<int> pre(n+1,0);
		for(int i =1;i<=n;i++) pre[i] = pre[i-1] + curr[i];
		bool check = false;
		for(int i =1;i<=m;i++){
			if((pre[s[i-1].second] - pre[s[i-1].first]) > ((s[i-1].second - s[i-1].first)/2)){
				check = true;
				break;
			}
		}
		if(check) right = mid-1;
		else left= mid+1;
	}
	if(left>q){
		cout<<"-1"<<endl;
		return;
	}
	cout<< left<<endl;
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
