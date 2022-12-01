#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n ;
	cin>> n;
	int left = 1;
	int length=3*n;
	int first=length;
	vector<pair<int,int>> res;
	while(first>=0){
		if(first<=left) {first-=3;continue;}
		res.push_back(make_pair(left, first));
		left+=3;
		first-=3;
	}
	cout<<res.size()<<endl;
	for(auto it: res) cout<<it.first<<" "<<it.second<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
