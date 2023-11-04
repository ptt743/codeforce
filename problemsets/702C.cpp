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
	int n,m;
	cin>> n >> m;
	vector<long long> a(n);
	vector<long long> b(m);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< m;i++) cin>> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(), b.end());
	
	long long left = 0, right = 2e9+1;
	while(left<= right){
		long long mid = (left + right)/2;
		int count =0;
		for(int i =0;i<m;i++){
			long long l = b[i] - mid, r = b[i] + mid;
			while(count<n){
				if(a[count]>=l && a[count]<=r) count++;
				else break;
			}
		}
		if(count==n) right=mid-1;
		else left = mid+1;
	}
	cout<< left<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
	solve();
    return 0;
}
