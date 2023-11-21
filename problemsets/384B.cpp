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
	int n, m,k;
	cin>> n >> m >> k;
	cout<<(m-1)*m/2<<endl;
	for(int i =0;i<m-1;i++){
		for(int j = i+1; j< m;j++){
			if(!k){
				cout << i+1 <<" "<<j+1<<endl;	
			} else cout << j+1<<" "<<i+1<<endl;
		}
	}
	return ;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
