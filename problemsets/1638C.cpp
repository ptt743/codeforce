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
	int n;
	cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	stack<pair<int,int>> st;
	for(int i = 0 ;i< n;i++){
		pair<int,int> temp = make_pair(a[i], a[i]);
		while(!st.empty() && st.top().second > temp.first){
			pair<int,int> top  = st.top();
			st.pop();
			temp = make_pair(min(top.first, temp.first), max(top.second, temp.second));
		}
		st.push(temp);
	}
	cout<< st.size() << endl;
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
