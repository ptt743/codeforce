#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	 int n;
	 cin>> n;
	 vector<int> a(n+1);
	 for( int i =0;i< n;i++) cin>> a[i];
	 sort(a.begin(), a.end());
	 int mi = a[1] + a[2];
	 int ma = a[n-1] + a[n];
	  int result = 0;
	 for(int i  = mi ; i<=ma;i++){
	 	 int l =1, r = n;
		 int count = 0;
		 while(l< r){
		 	if(a[l] + a[r]== i) {
				l++;r--;
				count++;
			} else if (a[l] + a[r]>i) r--;
			else l++;
		 }
		 result = max(result, count);
	 }
	 cout<< result<<endl;
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
