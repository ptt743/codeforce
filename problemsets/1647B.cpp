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
	int n,m;
	cin>> n >> m;
	vector<vector<int>> a(n, vector<int>(m,0));

	for(int i =0;i<n;i++) {
		string s;
		cin>> s;
		for(int j =0;j<m;j++){
			a[i][j] = s[j] - '0';
		}
	}
	for(int i =0;i< n-1;i++){
		int sum =0;
		for(int j =0;j< m-1;j++){
			sum= a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
			if(sum==3){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
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
