#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
 int n;
 cin>> n;
 vector<int> a(n);
 for(int i=0;i<n;i++){
   cin>> a[i];
 }
 int l=0, r = n-1;
 int first=0, second=0;
 bool is_first = true;
 while(l<=r){
   if(is_first){
     first += max(a[l],a[r]);
   }
   else second += max(a[l],a[r]);
   if(a[l]>a[r])l++;
   else r--;
   is_first=!is_first;
 }
 cout<<first<<" "<<second<<endl;
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
