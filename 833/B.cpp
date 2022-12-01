#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<unordered_map>
#include<stack>
using namespace std;
//*****taipt*****//
bool checkdiverse(string s){
	unordered_map<char, int> mp;
	int distinct=0;
	for( int i=0;i< s.size();i++){
		if(mp[s[i]]==0) distinct++;
		mp[s[i]]++;
	}
	for( auto it: mp){
		if(it.second> distinct) return false;
	}
	return true;
}
void solve(){
	int n, result=0;
	string s;
	cin>> n;
	cin>> s;
	for( int i =0;i<n;i++){
		string tmp="";
		unordered_map<char, int> mp;
		int distinct=0;
		int max_freg=0;
		for( int j = i ;j< n;j++){
			tmp+=s[j];
			if(mp[s[j]]==0) distinct++;
			mp[s[j]]++;
			if(mp[s[j]]>10) break;
			max_freg=max(max_freg, mp[s[j]]);
			if(max_freg<= distinct) 
				result++; 
		}
	}
	cout<<result<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
