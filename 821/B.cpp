#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x, y;
		cin>>n>>x>>y;
		bool a = x==0;
		bool b = y==0;
		if(!(a^b) || ((n-1)%max(x,y)!=0)) {
			cout<<"-1"<<endl;
			continue;
		}
		int iswinning = 1;
		int games = max(x,y);
		for( int i=1;i<=n-1;i++){
			if(games!=0){
				games--;
			} else {
				games = max(x,y) -1;
				iswinning = i+1;
			}
			cout<<iswinning<<" ";
		}
		cout<<endl;
	}
	return 0;
}
