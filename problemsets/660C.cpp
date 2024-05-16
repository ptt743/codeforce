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
	int n, k;
	cin>> n >>k;
	vector<int> a(n+1);
	vector<int> count(n+1,0);
	for(int i =1;i<=n;i++){ 
		cin>> a[i];
		count[i] = count[i-1];
		if(a[i]==0) count[i]++;
	}
	int left = 0;
	int ans = 0;
	int l=0, r=0;
	for(int i =1;i<=n;i++){
		while(count[i] - count[left]> k) left++;
		if(i - left > ans){
			ans = i - left;
			l = left;
			r = i;
		}
	}
	cout<< ans<<endl;
	for(int i = l+1;i<=r;i++) a[i]=1;
	for(int i =1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
