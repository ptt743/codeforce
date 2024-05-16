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
	string s;
	int m;
	cin>> s;
	cin>> m;
	while(m--){
		int l,r, k;  cin>> l >> r >> k;
		l-- , r--;
		k%= (r-l+1);
		int index = r - k+1;
		string second = s.substr(index,k);
		string first = s.substr(l, index - l);
		string temp = second + first;
		s = s.substr(0, l) + temp + s.substr(r+1);
	}
	cout<< s<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
