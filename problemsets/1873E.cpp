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
	long long x;
	cin>> n >> x;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	long long left = 1, right =  2e9;

	while(left<=right){
		long long mid = (left + right)/2;
		long long sum =0;
		for(int i =0;i< n;i++){
			if(a[i]<mid) sum += mid - a[i];
		}
		if(sum > x) right = mid -1;
		else left = mid+1;
	}
	cout<< right << endl;
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
