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
	int n,m;
	cin>> n >> m;
	vector<long long> a(n);
	for(int i =0;i<n;i++) {
		cin>> a[i];
	}
	vector<long long> b(n);
	string s; cin>> s;
	int l= 0, r = n-1;
	for(int i =0;i< n;i++){
		if(l==r) break;
		if(s[i]=='L') l++;
		else r--;
	}
	b[n-1] = a[l]%m;
	for(int i =n-2;i>=0;i--){
		if(s[i]=='L') {
			l--;
			b[i] = b[i+1] * a[l]%m;
		} else {
			r++;
			b[i] = b[i+1] * a[r]%m;
		}
	}
	for(int i =0;i< n;i++) cout<< b[i]<<" ";
	cout<< endl;
	


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
