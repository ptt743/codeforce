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
	vector<int> a(n+1);
	vector<int> sum(n+1);
	for(int i =1;i<=n;i++){
		cin>> a[i];
		sum[a[i]]++;
	}
	int ans = 0;
	for(int i =1;i<n;i++){
		int s = a[i];
		for(int j = i+1;j<=n;j++){
			s+=a[j];
			if(s<=n){
			  ans+= sum[s];
			  sum[s] = 0;
			}
		}
	}
	cout<<ans<<endl;
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
