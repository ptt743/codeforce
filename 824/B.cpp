#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n;
	cin>> n;
	vector<int> a(n);
	for( int i=0;i<n;i++) cin>> a[i];
	long long result=0;
	int minv = a[0];
	for( int i=1;i<n;i++){
		result+=(int)(a[i]/(2*minv-1));
		if(a[i]%(2*minv-1)==0) result--;
	}
	cout<<result<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
