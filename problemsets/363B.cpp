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
	int n, k;
	cin>> n>>k;
	vector<int> h(n);
	for(int i =0;i< n;i++) cin>> h[i];
	int sum  = 0;
	int index = 0;
	int temp = 0;
	int left = 0;
	for(int i =0;i<n;i++){
		if(i<k) {
			sum+=h[i];
			temp+=h[i];
		}
		else {
			sum+=h[i];
			sum-=h[left];
			left++;
			if(sum< temp){
				index = left;
				temp = sum;
				}
			}
		}
	cout<<index+1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
