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
	int n,k; cin>> n >> k;
	string s; cin>> s;
	vector<int> check(26);
	for(int i =0;i< k;i++) {
		char temp; cin>> temp;
		check[temp-'a'] =1;
	}
	int left = -1;
	long long result = 0;
	for(int i =0;i<=n;i++){
		if(i==n || check[s[i]-'a']==0){
			long long count  = i - left - 1;
			result += count*(count+1)/2;
			left = i;
		}	
	}
	cout<< result <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
