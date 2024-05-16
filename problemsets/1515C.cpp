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
	int n,m,x; cin>> n >> m >> x;
	vector<int> h(n+1);
	set<pair<int,int>> st;
	for(int i =1;i<=m;i++){
		st.insert(make_pair(0,i));
	}
	cout<<"YES"<<endl;

	for(int i =1;i<=n;i++){ 
		cin>> h[i];
		pair<int,int> bottom = *st.begin();
		st.erase(bottom);
		bottom.first +=h[i];
		cout<< bottom.second<<" ";
		st.insert(bottom);
	}
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
