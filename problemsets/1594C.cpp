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
	int n;
	char c;
	string s;
	cin>> n >> c;
	cin>> s;
	bool ok  = true;
	vector<int> ans;
	s= " "+s;
	for(int i =1;i<=n;i++){
		if(s[i]!=c){ ok = false; break;}
	}
	if(!ok){
		for(int i =1;i<=n;i++){
			ok = true;
			for(int j = i; j<= n;){
				ok &= (s[j]==c);
				j+= i;
			}
			if(ok){ ans.push_back(i); break;}
		}
	}
	if(!ok){
		ans.push_back(n-1);
		ans.push_back(n);
	}
	cout<< ans.size()<<endl;
	for(int i =0;i< ans.size();i++) cout<< ans[i] <<" ";
	if(ans.size()>0)cout<< endl;
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
