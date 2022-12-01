#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
using namespace std;
//*****taipt*****//

void solve(){	
	int n ;
	cin>>n;
	vector<int> count(101,0);
	vector<int> a(n);
	for( int i=0;i<n;i++) {
		cin>>a[i];
		count[a[i]]++;
	}
	sort(a.begin(), a.end());
	int l=1;
	int r = n;
	while( l<=r){
		int mid = (l+r)/2;
		multiset<int> s(a.begin(), a.end());
		for( int i =0;i<mid;i++){
			auto it  = s.upper_bound(mid-i);
			if( it==s.begin()) break;
			s.erase(--it);
			if(!s.empty()){
				int x = *s.begin();
				s.erase(s.begin());
				s.insert(x+mid-i);
			}
		}
		if(s.size()+mid==n) l = mid+1;
		else r = mid-1;
	}
	cout<<r<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
