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
	int n = s.size();
	string s2; cin>> s2;
	int count =0;
	for(int i =0;i< s.size();i++){
		if(s[i]=='+') count+=1;
		else count-=1;
	}
	int count2 = 0;
	for(int i =0;i< s2.size();i++)
		if(s2[i]=='?') count2++;
	count2=(1<<count2);
	function<int(int, string, int)> rec=[&](int index, string str, int sum)-> int{
		if(index==n){
			if(sum == count) return 1;
			else return 0;
		}
		if(str[index]=='+') return rec(index+1, str, sum+1);
		if(str[index]=='-') return rec(index+1, str, sum-1);
		return rec(index+1, str, sum +1) + rec(index+1, str, sum-1);
	};
	int count3 = rec(0,s2,0);
	cout<< count3<<" "<<count2<<endl;

	printf("%.12f\n", (double)count3/count2);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
