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
	int n,k; cin>> n >>k;
	string t; cin>>t;
	string s = "";
	int index = 0;
	for(int i =0;i<k;i++){
		for(int j =index;j<=s.size();j++){
			int siz = s.size() - j;
			if(siz>n ) continue;
			string first  = s.substr(j,siz);
			string second = t.substr(0,siz);
			if(first == second){
				s+= t.substr(siz); 
				index = j+1;
				break;
			}
		}
	}
	cout<< s<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
