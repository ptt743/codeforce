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
#include<unordered_map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,k;
	cin>> n >> k;
	vector<int> a(n);
	unordered_map<int,int>mp;
	for(int i =0;i< n;i++) {cin>> a[i]; mp[a[i]]++;}
	int left =0; int right = n-1;
	for(int i =1;i<=k;i++){
		if(mp[i]==0) { cout<<"0 "; continue;}
		while(i> a[left]) left++;
		while(i>a[right]) right--;
		cout << 2*(right - left +1)<<" ";
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
