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
 int n ;
 cin>> n;
 vector<int> a(n), b(n);
 for( int i =0;i< n; i++) cin>> a[i];
 for( int i =0;i< n;i++) cin>> b[i];
 int count = n - n/4;
 sort(a.begin(), a.end());
 sort(b.begin(), b.end());
 for( int i = n-2;i>=0;i--){
   a[i] = a[i]+ a[i+1];
   b[i] = b[i]+ b[i+1];
 }

 int left = 0, right = 1e5;
 while( left<= right){
   int mid = (right+ left)/2;
   int ct = mid + n;
   int select_com = ct - ct/4;
   int score_a = 0;
   int score_b = 0;
   if(select_com > mid){
    score_a = 100*mid + a[n-(select_com - mid)];
   } else{
    score_a = 100*select_com;
   }
   score_b = b[n - ((select_com>n)?n:select_com)];
   if(score_a<score_b) left= mid+1;
   else right = mid-1;
 }
 cout<< left<<endl;


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
