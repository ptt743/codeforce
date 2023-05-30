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
 char s;
 cin>> s;
 vector<bool> chars(26);
 chars['c'-'a']=1;
 chars['o' - 'a']=1;
 chars['d' - 'a']=1;
 chars['e'-'a']=1;
 chars['f'-'a']=1;
 chars['r'-'a']=1;
 chars['s'-'a']=1;
 if(chars[s-'a'])cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
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
