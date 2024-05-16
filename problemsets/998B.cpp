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
	int n,b;
	cin>> n >> b;
	vector<int> a(n);
	for(int i=0;i< n;i++) cin>> a[i];
	int even =0, odd=0;
	vector<int> check;
	for(int i =0;i< n;i++){
		if(a[i]%2==0) even++;
		else odd++;
		if(odd==even && odd!=0){
			if(i<n-1) check.push_back(abs(a[i+1] - a[i]));
		}
	}
	int ans = 0;
	sort(check.begin(), check.end());
	for(int i =0;i<check.size();i++){
		if(b-check[i]>=0){
			b-= check[i];
			ans++;
		}
	}
	cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
