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
	int k =0;
	while(k<n && a[k]==1) k++;
	if(k%2 ^ k==n) cout<<"Second"<<endl;
	else cout<<"First"<<endl;
	
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
