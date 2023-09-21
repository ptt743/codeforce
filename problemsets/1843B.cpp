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
	int l  =0, r=0;
	int count = 0;
	long long sum =0;
	for(int i =0;i< n;i++){
		if(a[i]<0){
			int r = i;
			while(r<n && a[r]<=0)a[r]=a[r]*(-1), r++;
			i = r;
			count++;
		}
	}
	for(int i =0;i< n;i++) sum +=a[i];
	cout<< sum<<" "<<count<<endl;
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
