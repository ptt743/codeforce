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
	int n,m;
	cin>> n >> m;
	vector<long long> k(n);
	for(int i =0;i< n;i++ ) cin>> k[i];
	sort(k.begin(), k.end());
	for(int i =0;i< m;i++){
		long long a,b ,c;
		cin>> a >> b >> c;
		int index = lower_bound(k.begin(), k.end(),b) - k.begin();
		if( index< n){
			if((k[index]- b)*(k[index]-b) < 4*a*c){ 
				cout<<"YES"<<endl;
				cout<< k[index] << endl;
				continue;
			}
		}
		if( index>0){
			if((k[index-1]-b)*(k[index-1]-b) < 4*a*c){
				cout<<"YES"<<endl;
				cout<< k[index-1]<<endl;
				continue;
			}
		}
		cout<<"NO"<<endl;
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
