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
	int n ;
	cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(),a.end());
	int l =0, r = n-1;
	int sum =0;
	while(l<r){
		sum += a[r]- a[l];
		r--;
		l++;
	}
	cout<< sum<<endl;
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
