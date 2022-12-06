#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;
//*****taipt*****//

void solve(){
	string s;
	cin>> s;
	string result="";
	sort(s.begin(), s.end());
	result+= s;
	sort(s.begin(), s.end(), greater<char>());
	result+= s;
	cout<<result<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
