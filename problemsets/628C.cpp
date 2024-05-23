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
	int n, k; cin>> n >> k;
	string s; cin>> s;
	int count =k;
	for(int i =0;i<s.size();i++){
		int value = (int)(s[i]-'a');
		int plus = min(max(25- value, value), k);
		if(value<=12) s[i] = (char)((int)(s[i]) + plus);
		else s[i] = (char)((int)(s[i]) - plus);
		k-=plus;
		if(k==0) break;
	}
	if(k>0) cout<<"-1"<<endl;
	else cout<< s<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
