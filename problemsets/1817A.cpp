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
#include <climits>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n, q;
	cin>> n>> q;
	vector<long long> a(n);
	for(int i =0;i<n;i++) cin>> a[i];
	vector<long long> p(n);
	for(int i =1;i<n-1;i++){
		int downhill = (a[i]<=a[i-1]) & (a[i]>=a[i+1]);
		p[i] = p[i-1]+ downhill;
	}
	
	for(int i =0;i< q;i++){
		int l,r;
		cin>>l >> r;
		l--;r--;
		if(r==l) cout<<"1"<<endl;
		else {
			cout<<(r-l+1)-(p[r-1]- p[l])<<endl;
		}
	}
	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
