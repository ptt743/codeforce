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
#define ll unsigned long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int k,x; ll a;
	cin>> k >> x >> a;
	ll sum =1;
	for(int i =0;i<x;i++){
		sum += sum/(k-1) + 1 ;
	}
	if( sum <=a ) cout<< "Yes"<<endl;
	else cout<<"No"<<endl;
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
