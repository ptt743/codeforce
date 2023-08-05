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
	int ones = 0;
	int n; cin>> n;
	vector<int> one(n+1), zero(n+1);
	for(int i =1;i<=n;i++){
		int t;
		cin>> t;
		one[i] = one[i-1];
		zero[i] = zero[i-1];
		if(t==1) ones++, one[i]++;
		else zero[i]++;
	}
	int ans = 0;
	for(int i =1;i<=n;i++){
		for(int j =i; j<=n;j++){
	 		ans = max(ans, zero[j] - zero[i-1] + ones - (one[j] - one[i-1]));
		}
	}
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
