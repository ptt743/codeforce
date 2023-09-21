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
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	int cur = a[0];
	int count =0;
	for(int i =0;i< n;i++){
		cur&=a[i];
		if(cur==0){
			count++;
			if(i+1<n) cur = a[i+1];
		}
	}
	cout<< (count>0?count:1)<<endl;
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
