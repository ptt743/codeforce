#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		long long result = INT_MAX;
		cin>> n;
		vector<long long> a(n);
		for( int i=0;i<n;i++) cin>> a[i];
		sort(a.begin(), a.end());
		for( int i=1;i<n-1;i++)
		{	result = min(result, abs(a[i]-a[i-1])+ abs(a[i]- a[i+1]));
		}
		cout<<result<<endl;
	}
}
