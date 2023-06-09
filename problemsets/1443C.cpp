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
	int n ;
	cin >> n;
	vector<long long> a(n);
	vector<long long> b(n);
	long long s1, s2;
	for(int i =0;i< n;i++){ cin>> a[i]; s1+=a[i];}
	for(int i =0;i< n;i++){ cin>> b[i]; s2+=b[i];}
	long long left = 1, right = max(s1,s2);
	while(left<=right){
		long long mid = (left + right)/2;
		long long count = 0;
		for(int i =0;i< n;i++){
			if(a[i]<=mid) continue;
			else count+=b[i];
		}
		if(count>mid) left = mid+1;
		else right= mid-1;
	}
	cout<<left<<endl;
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
