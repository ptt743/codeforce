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
	vector<pair<long long, long long>> a;
	for(int i =0;i<n;i++){
		long long x,y; 
		cin>> x >> y;
		a.push_back(make_pair(x,y));
	}
	long long left = 0, right = 1e9;
	while(left<= right){
		long long mid = (right + left)/2;
		long long begin =mid, end = 0;
		bool check = true;
		for(int i =0;i< n;i++){
			begin -= mid;
			end+=mid;
			if(begin <= a[i].second && end >= a[i].first){
				begin = max(begin, a[i].first);
				end = min(end, a[i].second);
			} else {
				check = false;
				break;
			}
		}
		if(check) right = mid-1;
		else left = mid+1;
	}
	cout<< left << endl;
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
