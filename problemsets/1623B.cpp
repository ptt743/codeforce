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
        cin >> n;
        vector mark(n + 1, vector<bool>(n + 1));
        vector<int> l(n), r(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
            mark[l[i]][r[i]] = true;
        }
        for (int i = 0; i < n; ++i) {
            for (int d = l[i]; d <= r[i]; ++d) {
                if ((d == l[i] or mark[l[i]][d - 1]) and (d == r[i] or mark[d + 1][r[i]])) {
                    cout << l[i] << ' ' << r[i] << ' ' << d << '\n';
                    break;
                }
            }
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
