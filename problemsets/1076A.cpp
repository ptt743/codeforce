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
	string s;
	cin>> n;
	cin>> s;
	string result = "";
	int pos = n-1;
	for(int i =0;i< n-1;i++){
		if(s[i]>s[i+1]) {pos = i; break;}
	}
	cout<< s.substr(0,pos) + s.substr(pos+1)<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
