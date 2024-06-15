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
	int n; cin>> n;
	map<long long, int> mp;
	priority_queue<pair<long long, int>> pq;
	for(int i =0;i< n;i++){
		long long temp; cin>> temp;
		mp[temp]++;
	}
	for(auto [key, value]: mp){
		pq.push(make_pair(value, key));
	}
	int count = n;
	while(pq.size()>=2){
		auto [value1,key1] = pq.top();
		pq.pop();
		auto [value2, key2] = pq.top();
		pq.pop();
		value1--;
		value2--;
		if(value1>0) pq.push(make_pair(value1, key1));
		if(value2>0) pq.push(make_pair(value2, key2));
		count-=2;
	}
	cout<< count << endl;

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
