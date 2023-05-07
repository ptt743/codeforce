#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
 int n, k,d;
 cin>> n>>k>>d;
 unordered_map<int,int> mp;
 vector<int> a(n);
 for(int i =0;i< n;i++) cin>> a[i];
 for(int i =0;i< d;i++) mp[a[i]]++;
 int left =0, right = d-1;
 int result = mp.size();
 for(right=d ;right< n;right++){
    mp[a[left]]--;
    if(mp[a[left]]==0) mp.erase(a[left]);
    left++;
    mp[a[right]]++;
    result = min(result, (int)mp.size());
 }
 cout<< result<<endl;
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
