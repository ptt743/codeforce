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
	string s;
	cin>> s;
	int n = s.size();
	char y = 'z';
	for(int i =0;i< n;i++){
		if(s[i]> y ) cout << "Ann"<<endl;
		else cout<< "Mike"<<endl;
		y = (y<s[i])?y:s[i];
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
