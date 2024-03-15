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
typedef unsigned long long ull;
int n;
// Segment Tree thực hiện thao tác cập nhật điểm
// và truy vấn đoạn
struct SegmentTree {
	vector<ull> node;
	SegmentTree(int n) : node(4 * n + 12,(1<<30)-1) {}
	void update(int v, int l, int r, int pos, ull val) {
		if (r < pos || l > pos) return;
		if (l == r) {
			node[v] = val;
			return;
		}
		int m = (l + r) >> 1;
		update(v << 1, l, m, pos, val);
		update(v << 1 | 1, m + 1, r, pos, val);
		node[v] = node[v << 1] & node[v << 1 | 1];
	}
	ull get(int v, int l, int r, int tl, int tr) {
		if (r < tl || l > tr) return (1<<30)-1;
		if (tl <= l && r <= tr) return node[v];
		int m = (l + r) >> 1;
		return get(v << 1, l, m, tl, tr) & get(v << 1 | 1, m + 1, r, tl, tr);
	}
};

void solve(){
	int n ; cin>> n;
	SegmentTree sg(n);
	for(int i =0;i< n;i++) {
		ull val;
		cin>> val;
		sg.update(1,1,n,i+1,val);
	}

	int q; cin>> q;
	while(q--){
		ull l,k;
		cin>> l >> k;
		ull r = n;
		ull check = l;
		while(l<=r){
			ull mid = (l+r)/2;
			ull cal = sg.get(1,1,n,check,mid);
			if(cal>=k ) l= mid+1;
			else r = mid-1;
		}
		if(r>=check)
			cout << r<<endl;
		else cout<<"-1"<<endl;
	}
}
 
int main() {
	
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>> t;
    while(t--)
        solve();
    return 0;
}
