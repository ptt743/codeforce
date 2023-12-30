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
		long long mx=-1e9;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%lld",&a[i]),mx=max(mx,a[i]);
		sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
		if(mx<0){
		    cout<<a[n]*a[n-1]*a[n-2]*a[n-3]*a[n-4]<<'\n';
		    continue;
		}
		ans=a[1]*a[2]*a[3]*a[4]*a[5];
		for(int i=6;i<=n;i++){
		    for(int j=1;j<=5;j++){
		        long long tmp=a[i];
		        for(int k=1;k<=5;k++){
		            if(k!=j)tmp*=a[k];
		        }
		        ans=max(ans,tmp);
		    }
		}
		printf("%lld\n",ans);
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
