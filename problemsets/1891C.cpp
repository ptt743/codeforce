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
	int n ; cin>> n ;
	vector<long long> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	int left = 1, right = n;
	long long count =0;
	long long ans = 0;
	for(; left<right;){
		if(count + a[left] >= a[right]){
			ans += a[right] - count +1 ;
			a[left] -= a[right] - count;
			count =0;
			right--;
		} else {
			count += a[left];
			ans += a[left];
			left++;
		}
	}
	if(a[left]>0){	
		if((count + a[left]==1)||((count + a[left])%2==0)) ans += (a[left] + count)/2 - count +1;
		else ans+= (a[left] + count)/2 - count +2;
	}
	cout<< ans << endl;
	

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
