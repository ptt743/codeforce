#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ;
	cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	long long left = 0, right = 0;
	long long result = 0;
	for(int i =0;i< n;i++){
		while(right< n && a[right] - a[i]<=2)  right++;
		if(right - i>2)result +=  (right-i-1)*(right-i-2)/2;
	}
	cout<< result<< endl;
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
