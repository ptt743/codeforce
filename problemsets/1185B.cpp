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
	string f,s;
	cin>> f >> s;
	if(f[0]!=s[0]){
		cout<< "NO"<<endl;
		return;
	}
	char pre = s[0];
	int index = 1;
	for(int i =1;i<f.size();i++){
		bool check = true;
		while(f[i]!=s[index]){
			if(s[index]!=pre){check = false; break;}	
			index++;
		}
		if(index==s.size() || f[i]!=s[index]) check = false;
		if(!check){
			cout<<"NO"<<endl;
			return;
		}
		pre = f[i];
		index++;
	}
	while(index< s.size()){
		if(s[index]!=pre) { cout<<"NO"<<endl; return;}
		index++;
	}
	cout<<"YES"<<endl;
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
