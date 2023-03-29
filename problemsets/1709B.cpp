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
    int n,m;
    cin>> n>>m;
    vector<long long> a(n);
    for(int i =0;i< n;i++)cin>> a[i];
    vector<long long> sum_l(n),sum_r(n);
    for(int i=1;i<n;i++){
      if(a[i]- a[i-1]>0) sum_r[i] = sum_r[i-1]+0;
      else sum_r[i] = sum_r[i-1] -(a[i]-a[i-1]);
    }
    for(int i= n-1;i>=0;i--){
      if(a[i]- a[i+1]>0) sum_l[i] = sum_l[i+1]+0;
      else sum_l[i] = sum_l[i+1] -(a[i]-a[i+1]);
    }
    int p,q;
    for(int i =0;i<m;i++){
      cin>>p>>q;
      if(p>q){
        cout<< sum_l[q-1]- sum_l[p-1]<<endl;
      } else{
        cout<<sum_r[q-1]- sum_r[p-1]<<endl;
      }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
