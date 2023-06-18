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
	long long k ;
	cin >> k;
	vector<int> digits;
	while(k>0){
		digits.push_back(k%9);
		k/=9;
	}
	reverse(digits.begin(), digits.end());
	for(int i =0;i< digits.size();i++){
		if(digits[i]<4) cout<<digits[i];
		else cout<<digits[i]+1;
	}
	cout<<endl;
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
