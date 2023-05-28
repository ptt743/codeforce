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
	long long a,b,c;
  cin>> a>>b>>c;
  int n ;
  cin>> n;
  priority_queue<int, vector<int>, greater<int>> qq1,qq2;
  for(int i =0;i< n;i++){
    int t;
    string s;
    cin>> t>> s;
    if(s=="USB")qq1.push(t);
    else qq2.push(t);
  }
  int count=0;
  long long ans = 0;
  while(a>0 && qq1.size()>0){
    count++;
    ans+=qq1.top();
    qq1.pop();
    a--;
  }
  while(b>0 && qq2.size()>0){
    count++;
    ans+=qq2.top();
    qq2.pop();
    b--;
  }
  while(c>0 && (qq1.size()>0 || qq2.size()>0)){
    int temp1 = INT_MAX, temp2 = INT_MAX;
    if(qq1.size()>0) temp1 = qq1.top();
    if(qq2.size()>0) temp2 = qq2.top();
    if(temp1>temp2){qq2.pop(); ans+= temp2;}
    else {qq1.pop(); ans+= temp1;};
    c--;
    count++;
  }
  cout<< count<<" "<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    t=1;
    solve();
    return 0;
}
