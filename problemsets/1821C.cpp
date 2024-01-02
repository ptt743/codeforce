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
	string s;
	cin>> s;
	int n = s.size();
	int min_dis =n;
	set<char> st;
	for(int i =0;i<n;i++) st.insert(s[i]);
	for(char index : st){
		int left = -1;
		int max_length = -1;
		for(int i =0;i< n;i++){
			if(s[i] == index){
				max_length = max(max_length,i - left -1);
				left = i;
			}
			
		}
		max_length = max(max_length, n - left -1);

		min_dis = min(min_dis, max_length);
	}
	int result =0;
	while(min_dis>0){
		min_dis/=2;
		result++;
	}
	cout<< result<<endl;
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
