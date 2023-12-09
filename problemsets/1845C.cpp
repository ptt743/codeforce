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
	int m; cin>> m;
	string l,r; cin>> l >> r;
	int mx = 0;
	for(int i =0;i< m;i++){
		int left = l[i] -'0';
		int right = r[i] - '0';
		int temp = mx;
		for(int j = left; j<= right;j++){
			int curr = mx;
			while(curr< s.size() && s[curr]!=(j+'0')) curr++;
			temp = max(temp, curr);
		}
		mx = temp;
		mx++;
	}
	if(mx>s.size()) cout<< "YES"<<endl;
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
