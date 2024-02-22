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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n, s;
	cin>> n >> s;
	map<pair<char, int>,int> sell, buy;
	for(int i =0;i< n;i++){
		char d;
		int p, q;
		cin>> d >> p >> q;
		if(d == 'S'){
			sell[make_pair('S', p)]+=q;
		} else {
			buy[make_pair('B', p)]+=q;
		}
	}
	int count =0;
	vector<pair<pair<char,int>,int>> se,bu;
	for( auto it = sell.begin(); it!=sell.end(); ++it){
		if(count>=s) break;
		se.push_back(make_pair(it->first, it->second));
		count++;
	}
	count=0;
	for( auto it = buy.rbegin(); it!=buy.rend() ; ++it){
		if(count>=s)break;
		bu.push_back(make_pair(it->first, it->second));
		count++;
	}
	for(int i = se.size()-1;i>=0;i--){
		cout<< se[i].first.first <<" "<<se[i].first.second<<" "<<se[i].second<<endl;
	}
	for(int i =0;i< bu.size();i++){
		cout<< bu[i].first.first<<" "<<bu[i].first.second<<" "<<bu[i].second<<endl;
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
