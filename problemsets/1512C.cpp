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
	int a,b,n;
		cin>>a>>b;
		n=a+b;
		string s;
		cin>>s;
		for(int i =0;i< n;i++){
			if(s[i]=='?'){
				s[i] = s[n -1 -i];
			}
		}
		for(int i =0;i< n;i++){
			if(s[i]=='0') a--;
			if(s[i]=='1') b--;
		}
		int left = 0, right =n-1;
		while(left<=right){
			if(s[left]=='?'){
				if(left<right){
					if(a>=2){s[left]=s[right]='0';a-=2;}
					else if(b>=2){s[left] = s[right] = '1'; b-=2;}
				} else {
					if(a>=1) s[left] = '0', a--;
					else if (b>=1) s[left] = '1',b--;
				}
			}
			left++;
			right--;
		}
		string v = s;
		reverse(v.begin(), v.end());
		if(v==s && b==0 && a==0) cout<< s<<endl;
		else cout<<"-1"<<endl;
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
