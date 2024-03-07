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
	string a, b;
	cin>> a;
	cin>> b;
	multiset<int> st,st1;
	for(int i =0;i< n;i++) {
		st.insert(b[i] - '0');
		st1.insert(b[i] -'0');
	}
	int count1 = 0 ;
	for(int i =0;i< n;i++){
		auto it = st1.lower_bound((a[i]-'0'));
		if(it==st1.end()) count1++;
		if(it!=st1.end())st1.erase(it);
	}
	int count2=0;
	for(int i =0;i< n;i++){
		auto it = st.upper_bound(a[i]-'0');
		if(it!=st.end()) count2++;
		if(it!=st.end())st.erase(it);
	}
	cout<< count1 << endl;
	cout<< count2 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
