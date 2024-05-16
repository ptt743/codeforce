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
	string t = "abcdefghijklmnopqrstuvwxyz";
	int left = 0;
	string result = "";
	for(int i =0;i< s.size();i++){
		int a = s[i] - 'a';
		int b = t[left] - 'a';
		if(left<26 && a<= b){
			result+=t[left];
			left++;
		} else result+=s[i];
	}
	if(left<26) cout<<"-1"<<endl;
	else cout<< result<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
