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
 int n, k;
 cin>> n>>k;
 vector<int> arr(n), arr_b(n);
 for(int i =0;i<n;i++){ 
   cin>> arr[i];
   arr_b[i] = arr[i];
 }
 sort(arr_b.begin(), arr_b.end());
 int index=0, count=0;
 for(int i =0;i< n;i++){
   if(arr[i]==arr_b[index]) {count++; index++;}
 }
 int du = n - count;
 int result = du/k + ((du%k)?1:0);
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
