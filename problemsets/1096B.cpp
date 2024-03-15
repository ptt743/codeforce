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
	string s; cin>> s;
	long long prefix = 2, suffix = 2;
	for(int i =1;i< n;i++){
		if( s[i]==s[i-1]) prefix++;
		else break;
	}
	for(int i =n-2;i>=0;i--){
		if(s[i]==s[i+1]) suffix++;
		else break;
	}
	long long result = 0;
	if(s[0]==s[n-1]) result= (prefix* suffix)% 998244353;
	else result = (prefix+suffix -1)% 998244353;
	cout<< result <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
