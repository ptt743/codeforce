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
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> a;
	int sum =0;
	for(int i =1;i<=n;i++){ 
		int t; cin>> t;
		sum += t ;
		a.push_back(make_pair(t,i));
	}
	if( n==2 || m<n) cout<<"-1"<<endl;
	else if(m==n) {
		cout<< 2*sum<<endl;
		for(int i =1;i<n;i++){
			cout<< i <<" "<<i+1<<endl;
		}
		cout<< n <<" "<<1<<endl;
	} else {
		sort(a.begin(), a.end());
		int temp = a[0].first + a[1].first;
		sum = 2*sum + (m-n) * temp;
		cout<< sum <<endl;
		for(int i =1;i<n;i++){
			cout<< i <<" "<<i+1<<endl;
		}
		cout<<n<<" "<<1<<endl;
		for(int i =n+1;i<=m;i++){
			cout<< a[0].second<<" "<<a[1].second<<endl; 
		}
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
