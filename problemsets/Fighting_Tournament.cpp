#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_map>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n , q;
 	cin>> n>>q;
	vector<int> a(n+1); 
	for(int i =1;i<=n;i++) cin>> a[i];
	vector<int> winner(n);
	int x=1;
	for( int i=2;i<=n;i++){
		if(a[i]> a[x]) x=i;
		winner[i-1]= x;
	}
	while(q--){
		int ind, k;
		cin>> ind>> k;
		int result=0;
		int left  = lower_bound(winner.begin(), winner.end(), ind) - winner.begin();
		int right  = upper_bound(winner.begin(), winner.end(), ind) - winner.begin()-1;
		right  = min(right, k);
		if( left!=n && left<=right) result = right - left+1;
		if(k>n-1 && a[ind]== n) result+= k- n+1;
		cout<<result<<endl;
	}
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
