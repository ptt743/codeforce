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
	int n,a,b,c;
	cin>> n >> a >> b >>c;
	vector<int> len = {a,b,c};
	vector<int> result(n+1,0);
	if(a<=n)result[a]=1;
	if(b<=n)result[b]=1;
	if(c<=n)result[c]=1;
	for(int i =1;i<=n;i++){
		for(int j =0;j< len.size();j++){
			if(i>=len[j] && result[i-len[j]]>0){
				result[i] = max(result[i],result[i - len[j]] +1);
			}
		}
	}
	cout<< result[n]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
