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
	string s,t;
	cin>> s;
	cin>> t;
	for(int i =0;i< s.size();i++){
		set<string> left, right;
		left.insert("");
		right.insert("");
		for(int j =0; j<=i;j++){
			string first = s.substr(j,i-j+1);
			string second = s.substr(j,i-j);
			reverse(second.begin(), second.end());
			left.insert(first);
			right.insert(second);
		}
		bool check = false;
		for(int j =0;j< t.size();j++){
			string first = t.substr(0,j+1);
			string second = t.substr(j+1);
			if(left.find(first)!=left.end()
			  && right.find(second)!=right.end()){
				check = true;
				break;
			}
		}
		if(check){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
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
