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
	bool check = true;
	int t; cin>> t;
	set<char> st = {'1','I','l','i','L'};
	set<char> st1 = {'0','O'};
	while(t--){
		string t;
		cin>> t;
		if(s.size()!=t.size()) continue;
		bool check_temp = false;
		for(int i =0;i< n;i++){
			s[i] = toupper(s[i]); t[i] = toupper(t[i]);
			if(tolower(s[i]) == tolower(t[i])) continue;
			else if(st.find(s[i]) != st.end() && st.find(t[i])!=st.end()) continue;
			else if(st1.find(s[i]) !=st1.end() && st1.find(t[i])!=st1.end()) continue;
			else check_temp = true;
		}
		check &= check_temp;
	}
	if(check) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
