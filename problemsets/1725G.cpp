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
  ll n; cin >> n;
    ll low = 3,high = 2*n+1; ll ans;
    while (low <= high){
        ll mid = low + (high-low)/2;
        ll count = (mid >= 4) ? (mid-1)/2 + mid/4 -1 : (mid-1)/2;
        if (count >= n){
            if (mid % 4 != 0 && mid% 2 == 0)
                ans = mid + 1;
            else 
                ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
 
    cout << ans << endl;	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
