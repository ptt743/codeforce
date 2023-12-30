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
	std::vector<std::string> a;
	int maxLen = 0;
	string input;
	while (getline(cin,input)) {
		if(input =="exit") break;
		maxLen = max(maxLen, (int)input.size());
        	a.push_back(input);
		
    	}
	maxLen+=2;
	int n = a.size();
	cout<<string(maxLen,'*')<<endl;
	for(int i =0;i< n;i++){
		int len = a[i].size();
		int paceSize = ( maxLen - len -2);
		int paceLeft = 0, paceRight = 0;
		if(paceSize%2!=0){
			paceLeft = paceSize/2+1;
			paceRight = paceSize/2;
		}else {
			paceLeft = paceSize/2;
			paceRight = paceSize/2;
		}
		string left( paceLeft,' ');
		string right(paceRight, ' ');
		string temp = "*"+ left + a[i] + right + "*";
		cout<< temp<<endl;
	}cout<<string(maxLen,'*')<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
