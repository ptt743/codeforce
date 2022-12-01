#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int lcm( int a, int b){
	int r = gcd(a,b);
	return a*b/r;
}


void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for( int i=0;i<n;i++) cin>> a[i];
	vector<int> b(n+1);
	b[0]=a[0];
	for( int i=1;i<n;i++) b[i] = lcm(a[i], a[i-1]);
	b[n] = a[n-1];
	for(int i=0;i<n;i++) if(gcd(b[i],b[i+1])!=a[i]) {
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
