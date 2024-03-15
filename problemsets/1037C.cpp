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
	string s,t;
	cin>> s;
	cin>> t;
	int result = 0;
	for(int i =0;i<n;i++){
		if(s[i]!=t[i]){
			if(i+1<n && s[i]!=s[i+1] && s[i+1] != t[i+1]){
				result+=1;
				i+=1; continue;
			} else result+=1;
		}
	}
	cout<< result << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
