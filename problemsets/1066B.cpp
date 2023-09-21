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
	int n, r;
	cin>> n >> r;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	vector<int> b;
	for(int i =0;i< n;i++) if(a[i]==1) b.push_back(i);
	if(b.size()==0) {cout<<"-1"<<endl; return;}
	int ans = 1;
	int left = b[0] - r+1;
	int right = b[0] + r-1;
	if(left>0) { cout<<"-1"<<endl; return;}
	int t = b[0];
	while(t<b.size() && b[t] - r+1<=0)t++;
	cout<< t-1<<endl;
	for(int i = t-1;i< b.size();){
		int temp = i;
		left = b[temp] - r+1;
		right = b[temp] + r-1;
		if(right>=n-1) break;
		if(temp==b.size()-1) break;
		while(temp< b.size() &&  b[temp] - r+1<=right+1) { temp++;}
		if( temp-1 ==i ){
			ans = -1;
			break;
		}
		ans+=1;
		i = temp-1;
	}
	if(right< n-1) { cout<<"-1"<<endl; return; }
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
