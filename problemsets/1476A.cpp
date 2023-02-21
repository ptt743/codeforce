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
 long long n,k;
 cin>> n>> k;
 long long sum  = k;
 if(k<=n){
   sum = k* (n/k + ((n%k)?1:0));
 }
 long long result = sum/n + ((sum%n)?1:0);
 cout<<result<<endl;

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
