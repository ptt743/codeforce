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
 vector<vector<char>> square(2, vector<char> (n));
 for(int i =0;i<2;i++){
   for( int j =0;j<n;j++){
     cin>> square[i][j];
   }
 }
 int result=0;
 for(int i =0;i< n;i++){
   if(square[1][i]=='1'){
     if(square[0][i]=='0'){
       result++;
       continue;
     }
     if(i-1>=0 && square[0][i-1]=='1'){
       square[0][i-1]='2';
       result++;
       continue;
     }
     
     if(i+1<n && square[0][i+1]=='1'){
       square[0][i+1]='2';
       result++;
       continue;
     }
   }
 }
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
