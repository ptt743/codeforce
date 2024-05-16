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
	int k; cin>> k;
	string s; cin>> s;
	int n = s.size();
	long long ans = 0;
	vector<long long> p(1e6+1);
	p[1] = 1;
	for(int i =2;i<=1e6;i++){
		p[i] = p[i-1] + i;
	}
	if(k==0){
		int count = 0;
		for(int i =0;i<n;i++){
			if(s[i]=='0') count++;
			if(s[i]=='1' || i==n-1) {
				ans += p[count];
				count=0;
			}
		}
		cout<< ans<<endl;
		return;
	}
	vector<long long> f(n+1,0);
	for(int i =1;i<=n;i++){
		f[i] = f[i-1];
		if(s[i-1]=='1') f[i]++;
	}
	for(int i =1;i<=n;i++){
		if(s[i-1]=='1'){
			long long indexbegin0 = lower_bound(f.begin(), f.end(), f[i]-k) - f.begin();
			long long indexbegin1 = lower_bound(f.begin(), f.end(), f[i]-k+1) - f.begin();
			long long indexend0 = lower_bound(f.begin(), f.end(), f[i]+1) - f.begin();
			if(indexbegin0!= n+1 && indexbegin1!=n+1){
				ans += (indexbegin1 - indexbegin0)*(indexend0 - i);	
			}
		}
	}

	cout<< ans<<endl;
}


long long i,k,n,t,a[1000009]; string s;
void solve2(){
	cin>>k>>s;
	a[0]=1;
	for (i=0;i<s.length();i++){
		if (s[i]=='1') t++;
		if (t>=k)n+=a[t-k];
		a[t]++;
	} 
	cout<<n;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
