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
		int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		// function which calculates the number of fancy coins taken
		// if we take exactly x coins of value k
		auto f = [&](int x)
		{
			int taken_1 = m - k * x;
			return max(0, taken_1 - a1) + max(0, x - ak);
		};
		
		int lf = 0;
		int rg = m / k;
		// dinh la m/k +1
		while(lf<rg)
		{
			int mid = (lf + rg) / 2;
			if(f(mid) < f(mid + 1))
				rg = mid;
			else
				lf = mid+1;
		}
		int ans = f(lf);
		cout << ans << endl;
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
