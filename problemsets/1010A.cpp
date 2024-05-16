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
	int n; cin>> n;
	double m; cin>> m;
	vector<double> a(n), b(n);
	double result = 0;
	for(int i =0;i< n;i++){
		cin>> a[i];
		if(a[i]<=1) {
			cout<<"-1"<<endl;
			exit(0);
		}
	}
	for(int i =0;i< n;i++){
		cin>> b[i];
		if(b[i]<=1){
			cout<<"-1"<<endl;
			exit(0);
		}
	}
	double s = m;
	s += s/(b[0]-1);
	for(int i =n-1 ;i>0;i--){
		s+=s/(b[i]-1);
		s+= s/(a[i]-1);
	}
	s+= s/(a[0]-1);
	printf("%.10lf\n",s-m);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
