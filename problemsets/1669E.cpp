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
	 int n; cin >> n;

        vector<vector<int>> cnt(12, vector<int>(12, 0));
        long long ans = 0;
        
        for(int i = 0;i < n; ++i) {
            string s; cin >> s;
            for(int j = 0;j < 2; ++j) {
                for(char c = 'a'; c <= 'k'; ++c) {
                    if(c == s[j]) continue;
                    string a = s; a[j] = c;
                    ans += cnt[a[0] - 'a'][a[1] - 'a'];
                }
            }
            ++cnt[s[0] - 'a'][s[1] - 'a'];
        }
        cout << ans << "\n"; 
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
