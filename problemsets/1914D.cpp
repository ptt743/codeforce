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
	vector<long long> a(n), b(n), c(n);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n;i++) cin>> b[i];
	for(int i=0;i< n;i++) cin>> c[i];

	function<vector<int>(vector<long long>&)> get3= [&](vector<long long> & a)->vector<int>{
		vector<pair<long long,int>> temp;
		for(int i =0;i< a.size();i++){
			temp.push_back(make_pair(a[i],i));
		}
		sort(temp.begin(), temp.end());
		vector<int> result;
		for(int i =0;i< 3;i++){
			result.push_back(temp[n-1 - i].second);
		}
		return result;
	};
	vector<int> ai = get3(a);
	vector<int> bi= get3(b);
	vector<int> ci = get3(c);
	long long sum =0;
	for(int i =0;i< 3;i++)
		for(int j =0;j< 3;j++)
			for(int k = 0;k< 3;k++){
				int x = ai[i];
				int y = bi[j];
				int z = ci[k];
				if(x!=y && y!=z && x!=z){
					sum = max(sum, a[x] + b[y] + c[z]);
				}
			}
	cout<< sum << endl;
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
