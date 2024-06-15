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
	int left = 0;
	int n = s.size();
	int result = 0;
	vector<int> indexs;
	for(int i =0;i< n; i++){
		if(s[i]!=s[left]){
			left= i;
		} else {
			if((i-left)%2!=0){
				if(i==n-1){
					for(int j =0;j<26;j++){
						if((char)('a'+ j)!=s[left]){
							s[i]='a' + j;
							break;
						}

							
					}
					continue;
				}
				indexs.push_back(i);
			}
		}
	}
	for(int i =0;i< indexs.size();i++){
		int index = indexs[i];
		for(int j =0;j<26;j++){
			char temp = 'a'+ j;
			if(temp!=s[index-1] && temp != s[index+1]){
				s[index] = temp;
				break;
			}
		}
		
	}
	cout<< s <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
