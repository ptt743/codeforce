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
	long long cells;
	long long n, m;
	cin>> n>> m;
	cells = n*n;
	vector<bool> r(n+1), c(n+1);
	int cols=0, rows=0;
	long long sum = 0;
	while(m--){
		int x, y;
		cin>> x>> y;
		if(!r[x]){
			sum += n - cols,rows++;
			r[x] = true;
		}
		if(!c[y]){ 
			sum += n  - rows,cols++;
			c[y] = true;
		}
		cout<< cells - sum<<" ";
	}
	cout<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
