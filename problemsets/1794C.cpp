#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ;
	cin>>n;
	vector<int> a(n+1);
	for( int i =1;i<=n;i++) cin>> a[i];
	vector<int> res;
	for(int i=1;i<= n;i++){
		int l =1, r = i;
		while(l<=r){
			int mid = (l+r)/2;
			if(a[i - mid+1] >= mid) l= mid+1;
			else r = mid-1;
		}
		res.push_back(r);
	}
	for(auto i : res) cout<< i<<" ";
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
