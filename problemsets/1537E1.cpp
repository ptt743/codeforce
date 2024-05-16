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
string get(string s, int k){
	while(s.size()< k){
		s += s;
	}
	while(s.size()>k) s.pop_back();
	return s;
}

void solve(){
	int n,k; cin>> n >>k;
	string s; cin>> s;
	string pref = "";
	pref+= s[0];
	string mn = get(pref, k);
	for(int i =1;i< s.size();i++){
		pref+=s[i];
		mn = min(mn, get(pref, k));
	}
	cout<< mn<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
