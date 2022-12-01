#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n;
	long long x,y;
	cin>>t;
	while(t--){
		cin>>n>>x>>y;
		string a,b;
		int count=0;
		cin>>a;
		cin>>b;
		int n = a.size();
		for( int i=0;i< n;i++){
			if(a[i]!=b[i]) count++;
		}
		if( count%2) {
			cout<<"-1"<<endl;
			continue;
		}
		else if(count==2){
			int l=0;
			int r=n-1;
			while(l<n && a[l]==b[l])l++;
			while( r>=0 && a[r]==b[r])r--;
			if(r==l+1) cout<< min(x, 2*y)<<endl;
			else cout<<y<<endl;
		} else{
			cout<< (count/2)*y<<endl;
		}
	}
	return 0;
}
