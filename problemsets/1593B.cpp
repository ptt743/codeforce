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
const string subseqs[] = { "00", "25", "50", "75" };

const int INF = 100;

int solve(string& s, string& t)
{
	int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return INF;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? INF : ans;
}
void RC(string s,int index, long long temp, long long &max, unordered_map<long long, bool> &mp){
  if(mp[temp]) return;
  else mp[temp] = true;
  if(temp%25==0&& temp> max) max= temp;
  for(int i = index; i<s.size();i++){
    if(temp==0 && s[i]=='0') continue;
    RC(s,i+1,temp*10+ (s[i]-'0'), max, mp);
    RC(s,i+1, temp, max, mp);
  }
}

void solve(){
    string n;
		cin >> n;
		
		int ans = INF;
		for (auto e : subseqs)
			ans = min(ans, solve(n, e));

		cout << ans << '\n';
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
