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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	string s;
	cin>> s;
	int n  = s.size();
	int tl = 0;
	map<int,int> mp; 
	for(int i = 0;i< n;i++){
		if(isupper(s[i])) tl |= 1, mp[1]++;
		if(islower(s[i])) tl |= 2, mp[2]++;
		if(isdigit(s[i])) tl |= 4, mp[4]++;
	}
	if(tl==1){
		s = "a2"+s.substr(2);
	}
	if(tl==2) s = "A2" + s.substr(2);
	if(tl==4) s = "Aa" + s.substr(2);
	char c;
	if(tl ==3) c = '5';
	if(tl==5) c='a';
	if(tl==6) c='A';
	if(tl ==3 || tl ==5 || tl==6){
		for(int i =0;i< n;i++){
			if(isupper(s[i]) && mp[1]>1){s[i] = c; break;}
			if(islower(s[i]) && mp[2]>1){s[i]=c; break;}
			if(isdigit(s[i]) && mp[4]>1){s[i]=c;break;}
		}
	}
	cout<< s<<endl;



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
