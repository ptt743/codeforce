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
	long long n;
	cin>> n;
	int count = 0;
	long long temp  = 2e18;
	while(temp>0){
		temp/=2;
		count++;
	}
	temp =1;
	string pattern = to_string(n);
	int result = INT_MAX;
	for(int i =0;i<count+1;i++){
		if(i==0) temp=1;
		else temp*=2;
		string pa = to_string(temp);
		int index =0;
		for(int j =0;j< pattern.size();j++){
			if(index<pa.size() && pattern[j] == pa[index]) index++;
		}
		result = min(result, (int)pattern.size() - index + (int)pa.size() - index);
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
