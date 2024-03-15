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
	int n, m;
	cin >> n >> m;
 	vector<long long> a(n), b(n);
	for(int i =1;i< n;i++) cin>> a[i];
	a[0] = 1;
	for(int i =0;i< n;i++) cin>> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int l =0;
	int pointer=0;
	int count =0;
	for(int i =0;i< n;i++){
		while( pointer < n && a[i]>=b[pointer]) pointer++;
		if( pointer <n && a[i]<b[pointer]){ count ++; pointer++;}
	}
	cout<< n - count << endl;
	
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
