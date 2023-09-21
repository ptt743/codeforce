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
	vector<int> w(n);
	vector<int> h(n);
	int sumw =0;
	int sumh =0;
	multiset<int> mw, mh;
	for(int i =0;i< n;i++){
		cin>> w[i]>> h[i];
		sumw+=w[i];
		mh.insert(h[i]);
	}
	for(int i =0;i< n;i++){
		auto it2 = mh.find(h[i]);
		mh.erase(it2);
		int value = *(mh.rbegin())* (sumw - w[i]);
		cout<< value<<" ";
		mh.insert(h[i]);
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
