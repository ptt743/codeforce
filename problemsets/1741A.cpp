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
	string a,b;
  cin>>a>>b;
  int n  = a.size();
  int m  = b.size();
  char al = a[n-1];
  char bl = b[m-1];
  if(al==bl){
    if(n==m) cout<<"="<<endl;
    else if((n<m &&al=='S') || (n>m && al=='L')) cout<<">"<<endl;
    else if((n<m && al=='L') || (n>m && al=='S')) cout<<"<"<<endl;
  }else {
    if(al=='L') cout<<">"<<endl;
    else if(al=='S') cout<<"<"<<endl;
    else if(al=='M'&& bl=='S') cout<<">"<<endl;
    else cout<<"<"<<endl;
  }
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
