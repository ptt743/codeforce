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
	vector<pair<int, string>> girls, pizza, taxi;
	function<int(string)> check = [&](string number)-> int{
		bool equal = true, decrease = true, other = true;
		string checkequal = "";
		for(int t = 0;t< number.size();t+=3){
			string temp = number.substr(t,2);
			checkequal+=temp;
		}
		for(int t = 1;t< checkequal.size();t++)
			if(checkequal[t]>=checkequal[t-1]) decrease = false;
		for(int t = 1;t< checkequal.size();t++)
			if(checkequal[t]!=checkequal[t-1]) equal = false;
		other = !(equal || decrease);
		if(other) return 1;
		if(equal) return 2;
		return 3;
	};
	for(int i =0;i< n;i++){
		int l;
		string s,number;
		cin>> l >> s;
		int p=0,g=0,ta=0;
		for(int j =0;j< l;j++){
			cin>> number;
			int type = check(number);
			if(type==1) g++;
			else if (type ==2) ta++;
			else p++;
		}
		girls.push_back(make_pair(g,s));
		pizza.push_back(make_pair(p,s));
		taxi.push_back(make_pair(ta,s));
	}
	sort(taxi.begin(),taxi.end(),[](pair<int, string> a, pair<int, string> b){
		return a.first < b.first ||(a.first ==b.first && a.second < b.second);
	});
	sort(pizza.begin(), pizza.end(),[](pair<int, string> a, pair<int, string> b){
		return a.first < b.first ||(a.first ==b.first && a.second < b.second);
	});
	sort(girls.begin(), girls.end(),[](pair<int, string> a, pair<int, string> b){
		return a.first < b.first ||(a.first ==b.first && a.second < b.second);
	});
	int pre = taxi[n-1].first;
	string resta = "If you want to call a taxi, you should call:";
	for(int i =0;i< taxi.size();i++){
		if(taxi[i].first == pre){
			resta+=" "+ taxi[i].second+ ",";
		}
	}
	resta[resta.size()-1]='.';

	pre = pizza[n-1].first;
	string respi = "If you want to order a pizza, you should call:";
	for(int i =0;i< pizza.size();i++){
		if(pizza[i].first == pre){
			respi+=" "+pizza[i].second+",";
		}
	}
	respi[respi.size()-1] = '.';
	pre = girls[n-1].first;
	string resgi = "If you want to go to a cafe with a wonderful girl, you should call:";
	for(int i =0;i< girls.size();i++){
		if(girls[i].first == pre){
			resgi+=" "+girls[i].second+",";
		}
	}
	resgi[resgi.size()-1] = '.';
	cout<< resta<<endl;
	cout<< respi<<endl;
	cout<< resgi<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
