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
	string s; cin >> s;
	n<<=1;
	int ans = 1;
	for(int i =1;i< n;i++){
		if(s[i]=='(' && s[i-1] =='('){
			ans+=1;
		}
	}
	cout<< ans << endl;
		
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
