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
	cin>>n;
	vector<int> a(2*n);
	for(int i=0;i<n+n;i++)
		cin>>a[i];
	int cyc=(n%2==0?4:2*n),pos=-1;
	for(int i=0;i<cyc;i++) {
		if(is_sorted(a,a+n+n)) {
			pos=i;
			break;
		}
		if(i%2) for(int j=0;j<n;j++) swap(a[j],a[j+n]);
		else for(int j=0;j<n+n;j+=2) swap(a[j],a[j+1]);
	}
	cout<<min(pos,cyc-pos);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
