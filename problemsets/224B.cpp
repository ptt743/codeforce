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
	int n,k;
	cin>> n >> k;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	set<int> left, right;
	int x=-1,t=-1;
	for(int i =1;i<=n;i++){
		left.insert(a[i]);
		if(left.size()==k){
			x = i;
			break;
		}
	}
	for(int i = x;i>=1;i--){
		right.insert(a[i]);
		if(right.size()==k){
			t = i;
			break;
		}
	}
	cout<<t<< " "<<x<<endl;
	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
