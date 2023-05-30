#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){	
	string s;
	cin>> s;
	int n  = s.size();
	int x=0, y =0;
	set<pair<int,int>> st;
	long long ans = 0;
	for(int i =0;i< n;i++){
		int pre_x=x, pre_y=y;
		if(s[i]=='S') x--;
		if(s[i]=='N') x++;
		if(s[i]=='W') y--;
		if(s[i]=='E') y++;
		if(st.find(make_pair(pre_x + x,pre_y + y))!= st.end()){
			ans+=1;
		} else {
			st.insert(make_pair(pre_x + x,pre_y + y));
			ans +=5;
		}
	}
	cout<<ans<<endl;
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
