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
	vector<int> a(n);
	for(int i =0;i< n;i++) cin >> a[i];
	int sum =0;
	for(int i =0;i< n;i++) sum += a[i];
	int temp = 0;
	int ans = 0;
	for(int i =0;i< n;i++){
		temp+=a[i];
		if(i!=n-1 && temp== sum- temp) ans++;
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
