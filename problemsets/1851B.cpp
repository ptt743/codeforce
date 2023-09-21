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
	int n ;
	cin>> n;
	vector<int> a(n);
	multiset<int> st1,st2;
	for(int i=0;i< n;i++){cin>> a[i]; 
		if(a[i]%2!=0) st1.insert(a[i]);
		else st2.insert(a[i]);
	}
	int pre = 0;

	for(int i =0;i< n;i++){
		int value = 0;
		if(a[i]%2!=0) value = *st1.begin(), st1.erase(st1.begin());
		else value = *st2.begin(), st2.erase(st2.begin());
		if(value<pre){cout<<"NO"<<endl; return;}
		pre = value;
	}
	cout<<"YES"<<endl;

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
