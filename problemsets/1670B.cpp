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
	int k;
	cin>> n;
	string s;
	cin>> s;
	cin>> k;
	set<char> st;
	for(int i =0;i<k;i++) {
		char temp;
		cin>> temp;
		st.insert(temp);
	}
	int pre = 0;
	int ans = 0;
	for(int i =0;i<n;i++){
		if(st.find(s[i])!=st.end()){
		ans = max(ans, i - pre);
		pre = i;
		}
	}
	cout<< ans<< endl;
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
