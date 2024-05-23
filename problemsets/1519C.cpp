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
bool option(pair<int,long long> a, pair<int,long long> b){
	return a.first < b.first || (a.first == b.first && a.second > b.second);
}
void solve(){
	int n ; cin >> n;
	vector<int> u(n);
	vector<long long> p(n);
	for(int i =0;i<n;i++) cin>> u[i];
	for(int i =0;i< n;i++) cin>> p[i];
	vector<vector<long long>> bst(n+1, vector<long long>());
	for(int i =0;i< n;i++){
		bst[u[i]].push_back(p[i]);
	}
	for(int i =1;i<= n;i++){
		sort(bst[i].begin(), bst[i].end(), greater<int>());
	}
	vector<vector<long long>> pr(n+1, vector<long long> (1,0));
	for(int i =1;i<=n;i++){
		for(int item : bst[i]){
			pr[i].push_back(pr[i].back() + item);
		}
	}
	vector<long long> ans(n+1,0);
	for(int i =1;i<=n;i++){
		for(int k =1;k<= bst[i].size();k++){
			ans[k]+= pr[i][(bst[i].size()/ k) * k];
		}
	}
	for(int i =1;i<=n;i++) cout<< ans[i]<<" ";
	cout<<endl;

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
