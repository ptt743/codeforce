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
	cin>> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++){
		long long t;
		cin>> t;
		a[i] = abs(t);
	}
	sort(a.begin(), a.end());
	long long right = 0;
	long long ans = 0;
	for(long long left = 0;left< n;left++){
		if(right< left) right = left;
		while(right< n){
			long long tempa = abs(a[right] - a[left]);
			long long tempb = abs(a[right]+ a[left]);
			if(tempa<=a[left] && tempb>=a[right]) right++;
			else break;
		}
		ans  += right - left -1;
	}
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
