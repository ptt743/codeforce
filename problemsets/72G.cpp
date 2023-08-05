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
	int first = 1, second = 2;
	if(n==1) cout<<first<<endl;
	else if (n==2) cout<< second<<endl;
        if(n<=2) return;
	for(int i =3;i<=n;i++){
		int temp  = second;
		second = second+ first;
		first = temp;
	}
	cout<<second<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
