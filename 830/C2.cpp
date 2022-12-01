#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lll long long
using namespace std;
 
lll get(const vector<lll> &sum, const vector<lll> &xo, int ll , int rr){
	return (sum[rr]- sum[ll-1]) - (xo[rr]^xo[ll-1]);
}
void solve(){
	int n,q;
	cin>>n>>q;
        vector<int> a(n+1), nxt(n+2);
	vector<lll>sum(n+1),xo(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		xo[i]=xo[i-1]^a[i];
	}
	//store next
	nxt[n+1] = n+1;
	for( int i=n;i>=1;i--){
		nxt[i] = nxt[i+1];
		if(a[i])nxt[i] = i;
	}
	while(q--){
                int ll, rr;
		cin>>ll>>rr;
		lll val  = get(sum,xo, ll,rr);
		int ansl = ll, ansr = rr;
		if( !val) ansl=ansr = ll;
		else{
			for( int i  = nxt[ll] ; i<= rr;i = nxt[i+1]){
				if(get(sum, xo,i,rr)==val){
					int L = i, R= rr;
					while(L<R){
						int mid = L+R>>1;
						if(get(sum, xo, i, mid)==val) R=mid;
						else L= mid+1;
					}
					if((L-i+1)<(ansr- ansl+1))ansl = i, ansr = L;
				} else break;
			}
		}
		cout<< ansl<<" "<<ansr<<endl;
	}
} 
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
