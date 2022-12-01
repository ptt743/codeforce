#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin>> t;
	while(t--){
		cin>> n;
		for( int i=1;i<=n;i++){
			for( int j = 1; j<= i;j++){
				cout<<(j==1||j==i)<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
