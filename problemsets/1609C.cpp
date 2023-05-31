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
  int n,e;
  cin>> n>>e;
  vector<long long> a(n);
  vector<long long> b(n);
  vector<long long> c(n);
  vector<bool> prime(1e6+1);
  prime[1] = false;
  for(int i = 2; i<=1e6;i++){
	if(visited[i]==false){
	  int temp = 2*i;
	  while(temp<=1e6){
		prime[temp] = true;
		temp+=i;
	  } 
	}
  }
  for(int i =0;i< n;i++) cin>> a[i];

  vector<bool> visited(n);
  for(int i =0;i< n;i++){
  	if(!visited[i]){
	  	visited[i] = true;
		int t = i;		
		while(t<n){
			
			visited[t] = true;
			b[t] = a[t];
			if(t-e>=0) b[t] *=b[t-e];
			t +=e;
		}
	}
  }
  visited = vector<bool>(n);
  for(int i =n-1;i>=0;i--){
	if(!visited[i]){
		visited[i] = true;
		int t = i;		
		while(t>=0){
			visited[t] = true;
			c[t] = a[t];
			if(t+e<n) c[t] *=c[t+e];
			t -=e;
		}
	}
   }
	
  int ans = 0;
  for(int i =0;i< n;i++){
	int left  = 0;
	int right = n/e;
	while(left<=right){
		int mid = (right+ left)/2;
		if(i+mid*e>=n) right = mid-1;
		if(b[i+ mid*e]!=b[i]) right=mid-1;
		else left = mid+1;
	}
	ans += right;
	left = 0, right = n/e;
	while(left<=right){
		int mid = (right+ left)/2;
		if(i - mid*e<0) right = mid-1;
		if(c[i- mid*e]!=c[i]) right = mid-1;
		else left = mid+1;
	}
	ans+= right;
  }
  cout<<ans<<endl;

  /*
   9 3
   2 4 2 2 4 2 2 16 8

   2 4 6 8 10
   3 6 9 12 15 

    

   2 1 1 

   4 1
   1 2 1 1
   1 2 2 2
   */
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
