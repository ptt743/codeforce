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
	int n; cin>>n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	for(int i =0;i< n;i++) cout<< a[i]<<" ";
	cout<< endl;
	int right = n-1;
	int left = n/2-1;
	int ans = 0;
	while(left>=0){
		if(a[right]>=a[left]*2){
			right--;
			ans++;
		}
		left--;
	}
	cout<< n - ans <<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
