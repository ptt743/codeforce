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
		int ans=0;
		int n,k;
		cin>>n>>k;
		vector<int> a(n+1);
		for(int i=1;i<=n;i++){cin>>a[i];ans+=a[i];}
		sort(a.begin() + 1,a.end());
		for(int i=1;i<=k;i++)ans+=a[n-k-i+1]/a[n-i+1]-a[n-k-i+1]-a[n-i+1];
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
