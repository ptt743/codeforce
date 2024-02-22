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
	int n, m;
	cin>> n >> m;
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =0;i< m;i++){
		int x, y;
		cin>> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int count2 =0;
	int count1 = 0;
	int countn =0;
	for(int i =1;i<=n;i++){
		if(adj[i].size()==2) count2++;
		if(adj[i].size()==1) count1++;
		if(adj[i].size()==n-1) countn++;
	}
	cout<< count1 <<" "<<count2<<" "<<countn<< endl; 
	if( count1==2 && count2==n-2)
		cout<<"bus topology"<<endl;
	else if( count2 == n)
		cout<<"ring topology"<<endl;
	else if(countn ==1 && count1== n-1)
		cout<<"star topology"<<endl;
	else cout<<"unknown topology"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
