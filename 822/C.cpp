#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, result=0;
		string s;
		cin>>n;
		cin>> s;
		vector<int> min_mul(n+1);
		for( int i=1;i<=n;i++) min_mul[i]= i;
		for(int i = n;i>=1;i--){
			for( int j = i;j <=n;j+=i){
				if(s[j-1]=='1') break;
				min_mul[j] = i;
			}
		}
		for( int i =1;i<=n;i++)if(s[i-1]=='0') result+= min_mul[i];
		cout<<result<<endl;
	}
	return 0;
}

/*
 #include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    bool a[n + 1];
    string str;
    cin >> str;
    for (int i = 1; i <= n; i++) {
        a[i] = (str[i - 1] == '1');
    }
    long long ans = 0;
    int cost[n + 1];
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j += i) {
            if (a[j]) break;
            cost[j] = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!a[i]) ans += cost[i];
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
 */
