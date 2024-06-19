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
const int INF = 2e9 + 10;
void solve(){
	int m; cin>> m;
	vector<vector<int>> a(2, vector<int>(m,0));
	for(int i =0;i< 2;i++){
		for(int j =0;j< m;j++) cin>> a[i][j];
	}
	int ans = INF;
	int sum1=0, sum2=0;
	for(int i =0;i< m;i++) sum1+=a[0][i];
	for(int i =0;i< m;i++){
		sum1-=a[0][i];
		ans = min(ans, max(sum1, sum2));
		sum2+= a[1][i];
	}
	cout << ans <<endl;
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
