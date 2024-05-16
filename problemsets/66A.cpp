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
	string s ; cin>> s;
	int n = s.size();
	string l = "9223372036854775807";
	bool greater = false;
	if(s.size()> l.size()) greater = true;
	else if(l.size()==s.size()) {
		for(int i =0;i< l.size();i++){
			if(l[i]==s[i]) continue;
			if(l[i]>s[i]) greater = false;
			else greater = true;
			break;
		}
	}
	if(greater){
		cout<<"BigInteger"<<endl;
	}else{
		long long temp = stoll(s);
		if(temp<=127) cout<<"byte"<<endl;
		else if (temp<=32767) cout<<"short"<<endl;
		else if (temp<=2147483647) cout<<"int"<<endl;
		else if (temp<=9223372036854775807) cout<<"long"<<endl;
	}
	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
