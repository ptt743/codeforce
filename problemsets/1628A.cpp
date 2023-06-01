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
	int n ;
	cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	// 0 1 3 2 4 
	// b tang theo thu tu tu dien 
	vector<bool> visited(n+1);
	int count = 0;
	vector<int> suffix(n);
	for(int i =n-1;i>=0;i--){
		if(a[i]== count){
			visited[count] = true;
			while(count<=n && visited[count]){
				count++;
			}
		}
		suffix[i] = count;
		visited[a[i]] = true;
	}
	for(int p =0;p<n;p++){
		int temp = p;
		while(
	}


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
