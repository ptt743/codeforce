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
	int n, q;
	cin>> n>> q;
	string s;
	int count = 0;
	cin>> s;
	for(int i =0;i< n-2;i++){
		if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
			count++;
		}
		
	}
	while(q--){
		int ind;
		char c;
		cin>> ind>> c;
		ind--;
		if(s[ind]=='a' || s[ind]=='b' || s[ind]=='c'){
			if(c!=s[ind] && ind < n-2 &&  s[ind]=='a' && s[ind+1]=='b' && s[ind+2]=='c') count--;
			if(c!=s[ind] && ind>0 && ind <n-1 &&  s[ind]=='b' && s[ind-1]=='a' && s[ind+1]=='c') count--;
			if(c!=s[ind] && ind >1 && s[ind]=='c' && s[ind-2]=='a' && s[ind-1]=='b') count--;

		}
		if(ind < n-2&& c!=s[ind] &&  c=='a' && s[ind+1]=='b' && s[ind+2]=='c') count++;
		if(ind>0 && c!=s[ind]&& ind <n-1 &&  c=='b' && s[ind-1]=='a' && s[ind+1]=='c') count++;
		if(ind >1 && c!=s[ind]&& c=='c' && s[ind-2]=='a' && s[ind-1]=='b') count++;
		s[ind] = c;
		cout<< count<< endl;
	}

	

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
