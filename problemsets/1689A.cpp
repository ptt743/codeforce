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
  int n,m,k;
  string a,b;
  cin>> n>>m>>k;
  cin>> a;
  cin>> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  string c;
  int i=0, j=0;
  int count=0;
  bool pre_flag=true;
  bool flag = true;
  while(i< n || j< m){
    if(i<n && j<m){
      flag = (a[i]<b[j])?1:0;
      if(count==k && pre_flag == flag){
        count=1;
        flag = !flag;
      }
      if(flag == pre_flag) count++;
      else count=1;
      pre_flag = flag;
      if(flag){
        c+= a[i];
        i++;
      } else{
        c+=b[j];
        j++;
      }

    } else{
      break;
    }
    
  }
  cout<<c<<endl;
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
