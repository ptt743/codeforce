#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_set>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
bool check( long long a){
  for(long long i = 1;i< a/2;i++){
    if(i*i*i == a) return true;
  }
  return false;
}
void solve(){
 long long x;
 cin>> x;
 unordered_set<long long> st;
 for(long long i =1;i*i*i<x;i++){
   st.insert(i*i*i);
 }
 for( long long i =1;i*i*i<x;i++){
   if(st.count(x-i*i*i)){
     cout<<"YES"<<endl;
     return;
   }
 }
 cout<<"NO"<<endl;

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
