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
	vector<int> pos;
	for(int i =0;i< n;i++) {
		if(s[i]=='1') pos.push_back(i);
	}
	int left = 0;
	int len = (int)pos.size();
	int right = pos.size();
	if(len==0 || (pos[len-1] - pos[0]) == len-1){
		cout<<"0"<<endl;
		return;
	}
	function<bool(vector<int>&, int)> can = [&](vector<int>&pos, int m)-> bool{
		int k = pos.size();
		int x = k-m;
		for(int i =0;i<=k - x;i++){
			int l = pos[i];
			int r = pos[i+x-1];
			if((r-l+1-x) <=m) return true;
		}
		return false;
	};

	while(left<=right){
		int mid =(left + right)/2;
		if(can(pos, mid)){
			right = mid-1;
		} else left = mid+1;
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
