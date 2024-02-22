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
struct compareoption{
	bool operator()(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b) const{
		return (a.first.first > b.first.first)
			|| (a.first.first == b.first.first && a.first.second > b.first.second)
			|| (a.first.first == b.first.first && a.first.second == b.first.second && a.second > b.second);
	
	}
};
void solve(){
	int n,m;
	cin>> n >> m;
	
	priority_queue<pair<pair<int,int>,int>, vector<pair<pair<int,int>,int>>, compareoption> qq;
	for(int i = 1;i<=m;i++){
		qq.push(make_pair(make_pair(0, (int)abs(((float)m+1)/2 -i)),i));
	}

	for(int i = 1; i<=n;i++){
		pair<pair<int,int>,int> top = qq.top();
		qq.pop();
		cout<< top.second<<endl;
		top.first.first++;
		qq.push(top);
	}

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
