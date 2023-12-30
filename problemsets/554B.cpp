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
	vector<string> a(n);
	int res = 0;
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n;i++){
		int count =0;
		for(int j =0;j< n;j++){
			if(a[j]==a[i]) count++;
		}
		res = max(res, count);
	}
	cout<<res<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
