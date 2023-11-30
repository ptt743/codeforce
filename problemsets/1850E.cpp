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
	long long n, c;
	cin >> n >> c;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	long long left = 0, right = 1e9/2;

	while(left <=right){
		long long mid = left + (right - left) / 2;
		long long sum =0;
		for(long long i =0;i<n;i++) {
			sum += (long long)(a[i] + 2*mid)*(a[i]+2*mid);
			if( sum> c) break;
		}
		if(sum > c) right = mid-1;
		else left = mid+1;
	}
	cout<< right<< endl;
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
