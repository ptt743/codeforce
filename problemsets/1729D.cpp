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
	int n;
  cin>>n;
  vector<long long> a(n+1), b(n+1),c(n+1);
  
  for(int i =1;i<=n;i++) cin>> a[i];
  for(int i =1;i<=n;i++) cin>> b[i];
  long long sum  =0;
  for(int i =1;i<=n;i++) {
    c[i] = b[i]-a[i];
     sum += c[i];
  }
  sort(c.begin()+1, c.end());
  int index  =1;
  if( sum<0){
    while(index <=n && sum<0) {
      sum-= c[index];
      index++;

    }
  }
  int left = index; int right =n;
  int ans = 0;
  while(left< right){
    if(c[left]+ c[right]>=0){
      ans++;
      sum-=( c[left] + c[right]);
      left++;
      right--;
      while(left< right && sum<0){
        sum-=c[left];
        left++;  
      }
    } else if ( c[left+1]>0) {left++; c[left] += c[left-1];}
    else {right--; c[right]+= c[right+1];}
  }
  cout<<ans<<endl;
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
