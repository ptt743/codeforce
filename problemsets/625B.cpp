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
	string s,a;
	cin>> s >> a;
	if(a.size()>s.size()) {cout<<"0"<<endl; return;}
	int count =0;
	int n  = s.size();
	for(int i =0;i< n-a.size()+1;i++){
		cout<<i<<endl;
		if(s.substr(i,a.size())==a){
			i+= a.size()-1;
			count++;
		}
	}
	cout<< count<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	solve();
    return 0;
}
