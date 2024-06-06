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
	int n ; cin>> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	priority_queue<long long, vector<long long>> pq;
	multiset<long long> ms;
	long long b = 0;
	for(int i =0;i< n;i++){ 
		ms.insert(a[i]);
		b+=a[i];
	}
	pq.push(b);
	while(!pq.empty()){
		long long top = pq.top();
		pq.pop();
		if(top< *(--ms.end()))break;
		else if( ms.find(top)!= ms.end()){
			ms.erase(ms.find(top));
		} else {
			pq.push(top/2);
			pq.push((top+1)/2);
		}
	}
	if(pq.empty()) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
