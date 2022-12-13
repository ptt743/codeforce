#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#define ll long long
using namespace std;
//*****taipt*****//
 
void solve(){
	int n, q;
	cin>>n>>q;
	vector<ll> steps(n+1,0);
	vector<ll> height_stair(n+1,0);
	vector<ll> height(q+1,0);
	for( int i=1;i<=n;i++){ 
		cin>> steps[i];
		height_stair[i] = height_stair[i-1]+ steps[i];
		steps[i] = max(steps[i-1], steps[i]);
	}
	for( int i=1;i<=q;i++) {
                cin>>height[i];
		long long result =0;
		auto it = upper_bound(steps.begin(), steps.end(), height[i]);
		int index = (it - steps.begin())-1;
		 cout<<height_stair[index]<<" ";
	}
	cout<<endl;
 
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
