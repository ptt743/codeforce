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
	int n,m,k; cin>> n >> m >> k;
	vector<int> a(n); 
	for(int i =1;i<=n;i++) cin>> a[i];
	vector<vector<int>> op(m+1);
	for(int i =1;i<=m;i++){
		int l,r,d; cin>> l >> r >> d;
		vector<int> temp = {l,r,d};
		op[i] = temp;
	}
	vector<int> opk(m+2,0);
	for(int i =0;i<k;i++){
		int x, y;
		cin>> x >>y;
		opk[x]+=1;
		if(y+1<=m)opk[y+1]-=1;
	}
	
	for(int i =1;i<=m;i++) opk[i] += opk[i-1];
	
	vector<int> temp(n+1,0);
	for(int i =1;i<=m;i++){
		
		int l = op[i][0];
		int r = op[i][1];
		int d = op[i][2];

		temp[l] += d*opk[i];
		if(r+1<=n) {
			temp[r+1]-=d*opk[i];
		}
	}
	for(int i =1;i<=n;i++) temp[i]+=temp[i-1];
	for(int i =1;i<=n;i++) a[i]+=temp[i];
	for(int i =1;i<=n;i++) cout<< a[i]<<" ";
	cout<<endl;
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
