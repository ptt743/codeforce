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
	int n;
	cin>> n;
	int a,b,c;
	cin>> a >> b >> c;
	map<char, int> mp;
	mp['S'] = a;
	mp['R'] = b;
	mp['P'] = c;

	map<char, char> mp1;
	mp1['S'] = 'R';
	mp1['R'] = 'P';
	mp1['P'] = 'S';
	string s;
	cin>> s;
	int count =0;
	string result =s;
	for(int i =0;i< n;i++){
		if(mp[s[i]]>0) {
			mp[s[i]]--;
			count++;
			result[i] = mp1[s[i]];
		} else result[i] = 'X';
	}
	for(int i = 0;i<n;i++){
		vector<char> chars{'R','P','S'};
		if(result[i]=='X'){
			for(int j =0 ;j< chars.size();j++){
				if(mp[chars[j]]>0){
					result[i] = mp1[chars[j]];
					mp[chars[j]]--;
					break;

				}
			}
		}
	}
	if( count >= (n+1)/2) {
		cout<<"YES"<<endl;
		cout<< result<<endl;
	}
	else cout<<"NO"<<endl;
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
