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
	string s; cin>> s;
	int n = s.size();
	s = "0" +s;
	
	vector<long long> prefix(n+1,0), suffix(n+1,0);
	for(int i =2;i<=n;i++){
		if(s[i] =='v' && s[i-1]=='v'){
			prefix[i] = prefix[i-1] + 1;
		}
		else prefix[i] = prefix[i-1];
	}
	for(int i =n-1;i>=0;i--){
		if(s[i]=='v' && s[i+1] =='v'){
			suffix[i] = suffix[i+1] + 1;
		}
		else suffix[i] = suffix[i+1];
	}
	long long result = 0;
	for(int i =1;i<=n;i++){

		if(s[i]=='o') {
			result+= prefix[i]*suffix[i];
		}
	}
	cout<< result<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
