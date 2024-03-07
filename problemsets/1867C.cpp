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
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	int mex = -1;
	for(int i =0;i< n;i++){
		if(i==0 && s[i]!=0){
			mex = 0;
			break;
		} 
		if(i>0 && s[i]!= s[i-1]+1){
			mex = s[i-1] +1;
			break;
		}
	}
	if(mex==-1){
		mex = s[n-1] +1;
	}
	cout<< mex << endl;
	int y;
	cin>> y;
	while(y!=-1){
		cout<< y << endl;
		cin>> y;
	}
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
