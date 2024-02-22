#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ;
	cin>> n;
	map<string,int> mp;
	for(int i =0;i< n;i++){
		string s;
		cin>> s;
		if(mp.find(s)==mp.end()){
			mp[s]=0;
			cout<<"OK"<<endl;
		} else {
			mp[s]++;
			s+=to_string(mp[s]);
			cout<<s<<endl;
		}
	}

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
