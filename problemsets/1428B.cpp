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
	cin>>s;
	int result = 0;
	bool check = false;
	set<char> st;
	for(int i =0;i< n;i++){
		st.insert(s[i]);
	}
	if(st.size()==3) check = false;
	else if( st.size()==1 || (st.size()==2 && st.find('-')!=st.end())) check = true;
	for(int i =0;i< n;i++){
		int left = (i-1 + n)%n;
		int right = (i)%n;
		if(s[left] == '-' || s[right] == '-' || check ){
			result++;
			continue;
		}
	}
	cout<< result << endl;
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
