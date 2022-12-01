#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t,n;
	cin>> t;
	while(t--){
		cin>>n;
		vector<int> a(n+1);
		for( int i=1;i<=n;i++) {cin>> a[i];}
		cout<< n-1<<endl;
		if(n-1>0)cout<< 1<<" "<<n<<endl;
		int x = (a[1]+ a[n])%2?a[1]:a[n];
		for( int i=2;i<n;i++){
			if((a[i]+x)%2) cout<<1<<" "<<i<<endl;
			else cout<<i<<" "<<n<<endl;
		}
	}
	return 0;
}
