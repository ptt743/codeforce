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
	string s,t;
	cin>> s>> t;
	string temp =t;
	reverse(temp.begin(),temp.end());
	int count1=0, count2 = 0;

	for(int i =0;i< n;i++){
		if(s[i]!=t[i]) count1++;
		if(s[i]!=temp[i]) count2++;
	}
	int ans1 = count1 + (count1-1>0?count1-1:0) ;
	int ans2 = 1+ (count2>0?count2:1) + (count2-1>0?count2-1:0);
	cout<< min(ans1,ans2)<<endl;
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
