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
/*
int main()
{
	long long n,m,i,j,k,l;string s,t;cin>>n>>m>>s>>t;
	while(s[i]==t[i]&&i<min(n,m)) i++;
	while(s[n-1]==t[m-1]&&i<min(n,m)) n--,m--;
	cout<<(s[i]=='*'&&n-i==1||s==t?"YES":"NO");
}
 * */
void solve(){
	int n, m;
	cin>> n >> m;
	string s, t;
	cin>> s >> t;
	if(m<n-1){
		cout<<"NO"<<endl;
		return;
	}
	bool have = false;
	for(int i =0;i<n;i++){
		if(s[i]=='*'){ have = true; break;}
	}
	if(!have && n!=m){
		cout<<"NO"<<endl;
		return;
	}
	int left1=0, left2 = 0;
	bool left = true;
	while(left1< n && left2<m ){
		if(s[left1]=='*') break;
		if(s[left1]!=t[left2]){left = false; break;}
		left1++;
		left2++;
	}
	int right1 = n-1, right2 = m-1;
	bool right = true;
	while(right1>=0 && right2>=0){
		if(s[right1]=='*') break;
		if(s[right1]!=t[right2]){right = false; break;}
		right1--;
		right2--;
	}
	if(left && right) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
