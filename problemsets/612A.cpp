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
	int n,p,q; cin>> n >> p >> q;
	string s;
	cin>> s;
	int t = n/p+1;
	int x = -1, y = -1;
	for(int i = 0 ;i<=t;i++){
		int k = (n - i*p)/q;
		if(k>=0 && i*p + k*q == n){
			x = i; y = k;
			break;
		}
	}
	if( x==-1 && y ==-1){
		cout<<"-1"<<endl;
		return;
	} else{
		cout<< x+y<<endl;
		int index = 0;
		for(int i = 0 ;i< x;i++){
			cout<< s.substr(index,p)<<endl;
			index+=p;
		}
		for(int i =0;i< y;i++){
			cout<< s.substr(index,q)<<endl;
			index+=q;
		}
	}

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
