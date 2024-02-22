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
	int n;
	cin>> n;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	bool check = false;
	int index = 0;
	for(int i =1;i< n;i++){
		if(a[i]==0 && a[i+1]==1){
			index = i;
			check = true;
		}
	}
	if(a[n]==0) { 
		index = n;
		check = true;
	}
	if(a[1]==1){
		index =0;
		check = true;
	}
	if(!check) cout<<-1<<endl;
	else
		for(int i =0;i<=n;i++){
			if(i>0)cout<< i<< " ";
			if( i == index) cout<<n+1<<" ";
		}
	cout<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
