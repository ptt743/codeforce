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
	vector<bool> used(n, false);
	int count =0;
	for(int i =1; i< n;i++){
		bool use = false;
		if(s[i] == s[i-1] && !used[i-1]) use = true;
		if(i>=2 && s[i]== s[i-2] && !used[i-2]) use = true;
		used[i] = use;
		count += used[i];
	}
		
	cout<< count<< endl;
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
