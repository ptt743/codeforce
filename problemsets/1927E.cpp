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
	int n,k;
	cin>> n >> k;
	vector<bool> visited(n+1, false);
	int right = n;
	int left= 1;
	vector<int> result(n+1,0);
	int index = 1;
	bool turn = true;
	while( left<= right){
		if(turn){
			while(visited[right]) right--;
			int temp =  index;
			int tempValue = right;
			while(temp<=n && tempValue>=1){
				result[temp] = tempValue;
				visited[tempValue] = true;
				tempValue--;
				temp+=k;
			}
		} else {
			while(visited[left]) left++;
			int temp = index;
			int tempValue = left;
			while(temp<=n && tempValue<=n){
				result[temp] = tempValue;
				visited[tempValue] = true;
				tempValue++;
				temp+=k;
			}
		
		}
		index++;
		turn= !turn;
	}
	for(int i =1;i<=n;i++) cout<< result[i] <<" ";
	cout<< endl;
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
