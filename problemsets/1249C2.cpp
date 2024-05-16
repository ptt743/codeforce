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
	long long n; cin>> n;
	int size = 38;
	long long ans = 0;
	vector<long long> powthr(39,1);
	vector<long long> sum(39,1);
	for(int i =1;i<=38;i++) powthr[i] = powthr[i-1]*3;
	for(int i=1;i<=38;i++) sum[i] = powthr[i] + sum[i-1];
	while(ans < n){
		int left = 0, right = size;
		while(left <= right){
			int mid = (left + right)/2;
			if(ans + powthr[mid] >n) right = mid-1;
			else left = mid+1;
		}
		if(ans + sum[right]<n){
			ans += powthr[left];
			break;
		} else {
			ans +=powthr[right];
			size = right-1;
		}
	}
	cout<< ans<<endl;

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
