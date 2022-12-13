#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//

void solve(){
	int n, d;
	cin>>n>>d;
	vector<int> power(n);
	for( int i =0;i<n;i++) cin>>power[i];
	sort(power.begin(), power.end());
	int l =0;
	int r = n;
	while( l<=r){
		int mid = (l+r)/2;
		int count = n;
		int index = n-1;
		int match_win=mid;
		while( count>0 && index >=0 && match_win>0){
			count -= d/power[index] + 1;
			index--;
			if(count>=0)match_win--;
		}
		if(match_win==0) l = mid+1;
		else r= mid-1;
	}
	cout<<r<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
