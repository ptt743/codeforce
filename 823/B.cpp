#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define INF 1e9 +13
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> pos(n);
		vector<int>time(n);
		for( int i=0;i< n;i++) {cin>> pos[i]; pos[i]*=2;}
		for( int i=0;i< n;i++) {cin>> time[i]; time[i]*=2;}
		int l=-1, r = INF;
		while( l<= r){
			int mid = (l+r)/2;
			int nl = 0, nr = INF;
			for( int i=0;i< n;i++){
				if(mid< time[i]){
					nl = INF;
					nr = 0;
					break;
				}
				nl = max(nl, pos[i] -(mid - time[i]));
				nr = min(nr, pos[i] +(mid - time[i]));
			}
			if(nl>nr) l=mid+1;
			else r = mid-1;
		}
		int ma = -1;
		for( int i=0;i<n;i++){
			ma = max(ma, pos[i] - (l-time[i]));
		}
		cout<<ma/2;
		if(ma%2!=0) cout<<".5";
		cout<<endl;
		
	}
}
