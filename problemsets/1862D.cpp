#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int32_t main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        int l = 0, r = min<int>(2e9,n);
        while (l<=r) {
            int m = (l + r) >> 1;
            // m = x + y, answer = x + 2 * y
            if (m * (m - 1) / 2 + m < n) {
                l = m +1;
            } else {
                r = m-1;
            }
        }
        int y = n - l * (l - 1) / 2;
        if ((l + 1) * l / 2 <= n) {
            cout << min(l + y, l + 1 + n - (l + 1) * l / 2) << "\n";
        } else {
            cout << l + y << "\n";
        }
    }
    return 0;
}
