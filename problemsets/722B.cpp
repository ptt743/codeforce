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
	vector<int> p(n+1,0);
	for(int i =1;i<=n;i++) cin>> p[i];
	bool check = true;
	vector<bool> chars(26, false);
	string s;
	for(int i=0;i<n+1;i++){
		getline(std::cin, s);
		int count =0;
		for(int j =0;j<s.size();j++){
			if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j] =='y') count++;
		}
		if(count!=p[i]) check = false;
	}
	if(check) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
 
int main() {
        solve();
    return 0;
}
