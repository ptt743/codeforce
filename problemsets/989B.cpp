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
	int n,p;
	string s;
	cin>> n >>p;
	cin>> s;
	bool check = false;
	string temp = "";
	for(int i =0;i< n;i++){
		if(s[i]=='.'){
			if(i+p<n && s[i+p]!='.') s[i] = (1- (s[i+p] -'0')) + '0';
			if(i-p>=0 && s[i-p]!='.') s[i] = (1 - (s[i-p]-'0')) +'0';
		}
	}
	for(int i=0;i< n-p; i++){
		if(s[i]!='.' && s[i] != s[i+p]){
			check = true;
		}
		if(i+p <n && s[i]=='.' && s[i+p]=='.'){
			s[i]='1';
			check = true;
			s[i+p]='0';
		}
	}
	if(!check) cout<< "NO"<<endl;
	else {
		for(int i =0;i< n;i++) if(s[i]=='.') s[i]='0';
		cout<< s << endl;
	}

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
