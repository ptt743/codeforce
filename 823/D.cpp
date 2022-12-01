#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
using namespace std;

void solve(){
	int n;
	string s1, s2;
	cin>> n;
	cin>> s1>>s2;
        reverse(s2.begin(), s2.end());
	map<pair<char,char>, int> mp;
	set<pair<char, char>> st;
	int count_dup=0;
	int count_central =0;
	for(int i=0;i<n;i++){
		pair<char, char> p = {s1[i], s2[i]};
		if( s1[i]> s2[i]) p = {p.second, p.first};
		if(mp[p]!=0){
			mp[p]++;
			if( mp[p]%2==0){
				count_dup--;
				if(p.first == p.second) count_central--;

			} else {
				count_dup++;
				if(p.first == p.second) count_central++;
			}
		} else {
			mp[p]++;
			count_dup++;
			if(p.first == p.second){
				count_central++;
			}
		}
	}
	if(n%2!= count_central || count_dup!= count_central) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
