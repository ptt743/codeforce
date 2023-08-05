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
	int n, m;
	cin>>n>> m;
	set<int> st;
	vector<int> a(n+1);
	vector<int> b(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	for(int i =n;i>0;i--){
		if(i<n) b[i] = b[i+1];
		if(st.find(a[i])==st.end()){
			b[i]++;
			st.insert(a[i]);
		}
	}
	while(m--){
		int t; cin>> t;
		cout<<b[t]<<endl;
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
