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
	int m; cin>> m;
	vector<int> p(m+1);
	for(int i =1;i<=m;i++) cin>>p[i];
	bool check = true;
	int count =0;
	function<pair<int,int>(int,int)>divide = [&](int l, int r)-> pair<int,int>{
		if(l==r) return make_pair(p[l],p[r]);
		int mid = (l+r)/2;
		pair<int,int> left = divide(l, mid);
		pair<int,int> right = divide(mid+1, r);
		if(abs(left.first- right.second)!=1 && abs(left.second - right.first)!=1) check = false;
		if(right.second< left.first) count++;
		return make_pair(min(left.first, right.first), max(left.second, right.second));
	};
	divide(1,m);
	if(check==false){
		cout<<"-1"<<endl;
		return;
	}
	cout<< count<<endl;
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
