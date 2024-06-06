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
	int n; cin>> n;
	vector<long long> a(n), b(n);
	for(int i =0;i<n;i++) cin>> a[i];
	for(int i =0;i< n;i++) cin>> b[i];
	priority_queue<int> pq1(a.begin(), a.end());
	priority_queue<int> pq2(b.begin(), b.end());
	int ans = 0;
	while(!pq1.empty()){
		int top1 = pq1.top();
		int top2 = pq2.top();
		if(top1==top2){
			pq1.pop();
			pq2.pop();
			continue;
		}
		ans++;
		if( top1< top2){
			pq2.pop();
			pq2.push(to_string(top2).size());
		} else{
			pq1.pop();
			pq1.push(to_string(top1).size());
		}
	}
	cout<< ans<<endl;
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
