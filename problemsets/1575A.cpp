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
bool option(pair<string,int> &t, pair<string,int> &v){
  string a = t.first;
  string b = v.first;
  for(int i =0;i< a.size();i++){
    if(i%2==0 && a[i]< b[i]) return true;
    else if (i%2==0 && a[i]> b[i]) return false;
    if(i%2!=0 && a[i]> b[i]) return true;
    else if (i%2!=0 && a[i]< b[i]) return false;
  }
  return true;
}

void solve(){
	int n,m;
  cin>>n>>m;
  vector<pair<string,int>> a(n);
  for(int i =0;i< n;i++){
    string t;
    cin>> t;
    a[i] = make_pair(t,i+1);
  }
  sort(a.begin(),a.end(), option);
  for(int i =0;i< n;i++) cout<< a[i].second<<" ";
  cout<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
