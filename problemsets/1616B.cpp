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
	int n ;
	cin>> n;
	string s;
	cin>> s;
	string temp = "";
	string temp2 = "";
	string res = "";	
	for(int i =0;i< n;i++){
		temp+=s[i];
		temp2 = s[i] + temp2;
		string str = temp + temp2;
		if(str<res|| res=="") res = str;
	}
	cout<< res<<endl;
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
