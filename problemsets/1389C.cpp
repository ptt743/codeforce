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
	int n  = s.size();
	int ans = 0;
	for(int i =0;i<10;i++){
		for(int j =0;j<10;j++){
			int x =i;
			int y = j;
			int count = 0;
			for(int k =0;k<n;k++){
				if(s[k]-'0'==x){
					count++;
					swap(x,y);
				}
			}
			if(count%2!=0 && x!=y) count--;
			ans = max(ans,count);
		}
	}
	cout<<s.size()- ans<<endl;
	
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
