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
   cin>>n;
   vector<long long> a(n), sum(n);
   for( int i=0;i< n;i++){
     cin>> a[i];
   }
   sum[0]=a[0];
   for(int i =1; i< n;i++ ) sum[i] = sum[i-1] + a[i];
   long long temp = 0;
   int result=0;
   for( int i =n-1;i>=0;i--){
    temp += a[i];
    int index = lower_bound(sum.begin(), sum.end(), temp) - sum.begin();
    if(sum[index]== temp && index <i && (index +1 + n- i > result)) result = index + n + 1 - i;
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
