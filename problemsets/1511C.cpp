#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>


#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
int distance(int value, set<int> &st){
	int index=0;
	for(auto it: st){
		if(it== value) break;
		index++;
	}
	return index;
}
void solve(){
	int n, q;
	cin>> n>>q;
	set<int> st;
	unordered_map<int, int> mp;
	int step = 0;
	for(int i =0;i<n;i++){
		int t;
		cin>>t;
		++step;
		if(mp[t]==0) mp[t]= step;
		st.insert( step);
	}
	step =0;
	while(q--){
		int t;
		cin>> t;
		int temp = mp[t];
		int index =distance(temp,st) ;
		st.insert(step);
		mp[t]= step;
		auto it  = st.find(temp);
		st.erase(it);
		step-=1;
		cout<< index+1<<" ";
	}
	cout<<endl;


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
