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
	int n, m;
	cin>> n >> m;
	long long max_c = 0, max_c2 = 0;
	long long sum = 0;
	for(int i =0;i< n;i++){
		long long t;
		cin>> t;
		if(max_c<t){
			max_c2 = max_c;
			max_c = t;
		} else if (t> max_c2) max_c2 = t;
		sum+=t;
	}
	long long min_c = 1e8+1;
	long long sum_t = 0;
	for(int i =0;i< m;i++){
		long long t;
		cin>> t;
		min_c = min(min_c, t);
		sum_t+= t;
	}
	if(max_c> min_c) {
		cout<<"-1"<<endl;
		return;
	}
	long long ans = 0;
	ans = sum*m;
	ans += sum_t;
	ans-= max_c*m;
	if(max_c < min_c){
		ans+= max_c;
		ans -=max_c2;
	}
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
