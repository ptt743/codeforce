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
	cin>> n;
	string s;
	cin>> s;
	set<int> a,b;
	for(int i =0;i<n;i++){
		if(s[i]=='D') a.insert(i);
		else b.insert(i);
	}
	vector<bool> visited(n,false);
	int index = 0;
	while(a.size()>0 && b.size()>0){
		if(!visited[index]){
			int temp = 0;
			if(s[index]=='D') {
				auto it = b.upper_bound(index);
				if(it!=b.end()){
					temp = *it;
					b.erase(*it);
				} else{
					temp = *b.begin();
					b.erase(*b.begin());
				}
			}
			else {
				auto it = a.upper_bound(index);
				if(it!=a.end()){
					temp = *it;
					a.erase(*it);
				}
				else {
					temp = *a.begin();
					a.erase(a.begin());
				}
			}
			visited[temp] = true;
		}
		index = (index+1)%s.size();
	}
	if(a.size()>0) cout<<"D"<<endl;
	else cout<<"R"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	solve();
    return 0;
}
