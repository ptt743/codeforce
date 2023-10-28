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
	int n, m;
	cin>> n >> m;
	string s;
	cin>> s;
	vector<char> ch(26);
	for(int i =0;i< 26;i++) ch[i] = i + 'a';
	for(int i =0;i< m;i++){
		char a,b;
		cin>> a >> b;
		for(int j =0;j<26;j++){
			if(ch[j]==a) ch[j] = b;
			else if (ch[j]==b) ch[j]=a;
		}
	}
	for(int i =0;i<n;i++) s[i] = ch[s[i]-'a'];
	cout<< s<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
