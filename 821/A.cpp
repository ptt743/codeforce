#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		long long result=0;
		cin>>n>>k;
		vector<long long> a(n);
		for( int i=0;i< n;i++){
			cin>>a[i];	
		}
		int count=0;
		while( count<k){
			int j = count;
			long long max_temp  = a[count];
			while(j<n){
				max_temp = max(max_temp, a[j]);
				j+=k;
			}
			result+= max_temp;
			count++;
		}
		cout<<result<<endl;
	}
	return 0;
}
