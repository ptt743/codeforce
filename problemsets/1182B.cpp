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
	int h,w;
	cin>> h >> w;
	vector<string> a(h);
	for(int i =0;i< h;i++) cin> a[i];
	vector<int> row(h), col(w);
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			row[i] += (a[i][j]=='*');
			col[j] +=(a[i][j]=='*');
		}
	}
	bool check = true;
	int count1 = 0;
	for(int i =1;i< h-1;i++){
		if( row[i]> row[i-1] && row[i]>row[i+1]) count1++;
	}
	int count2=0;
	for(int i =1 ;i< w-1;i++){
		if(col[i]> col[i-1] && col[i]> col[i+1]) count2++;
	}
	check = (count1==1) && (count2==1);
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
