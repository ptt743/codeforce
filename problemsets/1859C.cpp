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
	long long ans = 0;
	for(int i =0;i<=n;i++){
		long long sum =0;
		int max_value = 0;
		for(int j = 1;j<=i;j++){
		 	sum += j*j;
			max_value = max(max_value, j*j);
		}
		for(int j =i+1, k =n ;j<=n;j++,k--){
			sum += j*k;
			max_value = max(max_value, j*k);
		}
		ans = max(ans, sum - max_value);
	}
	cout<< ans<< endl;	
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
