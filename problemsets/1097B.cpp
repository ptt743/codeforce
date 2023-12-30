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
	int n;
	cin>> n;
	vector<int> a(n);
	for(int i=0;i< n;i++){
		cin>> a[i];
	}
	function<bool(int,int)>funcx = [&](int sum, int index)-> bool{
		if(index>=n){
			return sum ==0 || sum%360==0;
		}
		return funcx(sum + a[index], index +1) || funcx(sum - a[index], index +1);
	};
	if( funcx(0,0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
