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
	int n ;
	cin>> n;
	vector<pair<long long,int>> a;
	for( int i =0;i< n;i++){
		long long t;
		cin>> t;
		a.push_back(make_pair(t,i+1));
	}
	sort(a.begin(), a.end());
	vector<long long> sum(n);
	sum[0] = a[0].first;
	for( int i =1;i< n;i++) sum[i] = sum[i-1]+ a[i].first;
	vector<int> ans;
	ans.push_back(a[n-1].second);
	for(int i =n-2;i>=0;i--){
		if(sum[i]>=a[i+1].first) ans.push_back(a[i].second);
		else break;
	}
	sort(ans.begin(), ans.end());
	cout<<ans.size()<<endl;
	for(int item: ans) cout<<item<<" ";
	cout<<endl;

	// 1 2 3 4 5 
	// 1 3 6 10 5 
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
