#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n ;
	cin>> n;
	vector<long long> a(n+1);
	long long sum1=0, sum2=0;
	for( int i =1;i<=n;i++){ 
		cin>>a[i];
		if(a[i]>=0) sum1+=a[i];
		else sum2+=a[i];
	}
	if(abs(sum1)>abs(sum2))cout<<abs(sum1)-abs(sum2)<<endl;
	else cout<<abs(sum2)-abs(sum1)<<endl;

}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
