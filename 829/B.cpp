#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> result;
	if( n%2==0){
		int mid = n/2;
		while(mid>0){
			result.push_back(mid--);
			result.push_back(n--);
		}
	}else{
		int mid = n/2;
		int last = n/2+1;
		while(mid>0) {
			result.push_back(n--);
			result.push_back(mid--);
		}
		result.push_back(last);
	}
	for(auto it: result)cout<< it<<" ";
	cout<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
