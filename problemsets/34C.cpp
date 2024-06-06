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
	string s; cin>> s;
	set<int> a;
	string temp ="";
	for(int i =0;i<=s.size();i++){
		if(s[i]==','  || i ==s.size()){
			a.insert(stoi(temp));
			temp="";
		} else{
			temp+=s[i];
		}
	}
	vector<int> ans;
	for(int item : a){
		ans.push_back(item);
	}
	int left = 0, right = 0;
	string result = "";
	for(int i =0;i<=ans.size();i++){
		if(i<ans.size() && ans[i]- ans[right] <=1) right= i;
		else {
			if(ans[left]== ans[right])
				result+= to_string(ans[left]);
			else
				result += to_string(ans[left]) +"-"+to_string(ans[right]);
			if(i<ans.size()) result+=",";
			left = i, right = i;
		}
	}
	
	cout<<result<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
