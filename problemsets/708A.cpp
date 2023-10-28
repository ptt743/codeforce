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
	int n  = s.size();
	bool check = false;
	for(int i =0;i< n;i++){
		char temp =  (26 + ((s[i]-'a')-1))%26 + 'a';
		if(temp> s[i]) continue;
		else{
			check = true;
			while(i<n && s[i] > temp){
				s[i] = temp;
				i++;
				if(i<n) temp = (26 + ((s[i]-'a')-1))%26 + 'a'; 
			}
			break;
		}
	}
	if(!check){
		char temp =  (26 + ((s[n-1]-'a')-1))%26 + 'a';
		s[n-1] = temp;
	}
	cout<< s<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
