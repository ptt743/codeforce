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
	cin>> s;
	int n = s.size();
	string ans ="";
	bool check = false;
	for(int i = n-1;i>0;i--){
		int first = s[i]-'0';
		int second = s[i-1]-'0';
		if(first + second >=10){
			check = true;
			ans = s.substr(0,i-1) + to_string(first + second);
			if(i+1<n) ans += s.substr(i+1);
			break;
		}
	}
	if(!check){
		ans = to_string((s[0]-'0') + (s[1]-'0'));
		if(n>2) ans += s.substr(2);
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
