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
	int r1,c1,r2,c2;
	cin>> r1 >> c1 >> r2 >> c2;
	int r=0,b=0,k=0;
	if( r1==r2 || c1 == c2) cout<<"1"<<" ";
	else cout<< "2 ";

	if((c1 + r1)%2 != (c2+r2)%2) cout<<"0 ";
	else {
		if(abs(c1-c2) == abs(r1-r2)) cout<<"1 ";
		else cout<<"2 ";
	}
	cout << max(abs(c1- c2), abs(r1-r2))<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
