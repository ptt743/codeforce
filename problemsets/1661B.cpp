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
	int n ; cin>> n;
	int mod = 32768;
	vector<int> a(n);
	for(int i =0;i< n;i++){
		cin>> a[i];
	        int ans = 15;
		for(int j =0;j<=15;j++){
			int temp  = ( a[i] + j)%mod;
			int count =j;
			while(temp!=0){
				temp= (temp*2)%mod;
				count++;
			}
			ans = min(ans, count);
		}
		cout<< ans<<" ";
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
