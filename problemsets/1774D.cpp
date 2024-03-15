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
	int n,m; cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	int sum =0;
	vector<int> count(n,0);
	for(int i =0;i< n;i++){
		int countEach = 0;
		for(int j =0;j< m;j++){
			cin>> a[i][j];
			if(a[i][j]==1){
				sum++;
				countEach++;
			}
		}
		count[i] = countEach;
	}
	int one = sum/n;
	if(sum%n!=0){
		cout<<"-1"<<endl;
		return;
	}
	int left = 0, right =0 ;
	vector<pair<pair<int,int>,int>> result;
	for(;right< n;){
		while( left <n && count[left]<=one) left++;
		if(count[right]< one){
			for(int i =0;i< m;i++){
				if(count[left]==one) break;
				if(count[right]==one) break;
				if(a[right][i]==0 && a[left][i]==1){
					a[right][i] = 1;
					a[left][i] = 0;
					count[left]--;
					count[right]++;
					result.push_back(make_pair(make_pair(right+1, left+1),i+1));
				}
			}
			if(count[right] == one) right++;
		} else {
			right++;
		}
	}
	if(right<n) cout<<"-1"<<endl;
	else {
		cout<< result.size()<<endl;
		for(int i= 0;i< result.size();i++) cout<< result[i].first.first <<" "<<result[i].first.second<<" "<<result[i].second<<endl;
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
