#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

void solve(){
	int n;
	cin>> n;
	string s;
	cin>> s;
	stack<char> st;
	bool flag = true;
	for( int i=0;i<n;i++){
		if(s[i]=='Q') st.push(s[i]);
		else if (!st.empty()) st.pop();
	}
	if(st.size()>0) flag = false;
	if(flag) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
