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
	long long n;
	cin>> n;
	set<long long> st;
	for(int i =1;i<= sqrt(n);i++){
		long long j = n/i;
		st.insert(i);
		st.insert(j);
	}
	st.insert(0);
	cout<< st.size()<<endl;
	for(auto &it: st){
		cout<<it<<" ";
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
