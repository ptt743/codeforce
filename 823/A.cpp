#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,c;
	cin>> t;
	while(t--){
		cin>>n>>c;
		vector<int> a(n);
		int result=0;
		for( int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		int left = 0;
		for( int i=0;i<=n;i++){
			if( a[left]!= a[i] || i==n){
				if((i - left)< c) result+= i-left;
				else result+= c;
				if(i==n) break;
				while(left< n && a[left]!=a[i]) left++;
			}
		}
		cout<<result<<endl;
	}
}
