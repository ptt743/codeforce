#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;
//*****taipt*****//

void solve(){
	long long n,c,d;
	cin>> n>>c>>d;
	vector<long long> a(n,0);
	for( int i=0;i<n;i++){
		cin>> a[i];
	}
	sort(a.begin(), a.end(), greater<long long>());
	long long right = d +1;
	long long left=0;
	long long coins=0;
	while( left<= right){
		coins=0;
		int mid = (left+right)/2;
		int days = d;
		int index = n-1;
		for(int i =0;i<d;i++){
			if(i%(mid+1)<n)coins+= a[i%(mid+1)];
		}
		if(coins<c) right = mid-1;
		else left = mid+1;
	}
	if( right<0)cout<<"Impossible"<<endl;
	else if (right> d) cout<<"Infinity"<<endl;
	else cout<<right<<endl;
} 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
