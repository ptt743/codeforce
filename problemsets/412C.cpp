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
	vector<string> a;
	int m =0;
	for(int i =0;i< n;i++){
		string temp;
		cin>> temp;
		m = temp.size();
		a.push_back(temp);
	}
	string result = "";
	for(int i =0;i< m;i++){
		bool check = false;
		char temp = 'x';
		set<char> st;
		for(int j =0;j< n;j++){
			if(a[j][i]=='?') check = true;
			else temp = a[j][i];
			st.insert(a[j][i]);
		}
		if(check && st.size()<=2) result += temp;
		else if ( !check && st.size()==1) result += temp;
		else result+='?';
	}
	cout<< result<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
