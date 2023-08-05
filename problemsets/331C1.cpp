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
	string n;
	cin>> n;
	long long sum = stoll(n);
	int count = 0;
	while(sum>0){
		int max_val = 0;
		for(int i=0;i<n.size();i++){
			max_val  = max(max_val, n[i]- '0');
		}
		
		sum -= max_val;
		n = to_string(sum);
		count++;
	}
	cout<< count<<endl;


}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
