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
	int n;
	cin>> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	long long result = 0;
	for(int i = n-1;i>=0;i--){
		int pre_index = i + a[i];
		if( pre_index<n)  a[i] += a[pre_index];
		result = max( result, a[i]);
	}
	cout<< result<<endl;
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
