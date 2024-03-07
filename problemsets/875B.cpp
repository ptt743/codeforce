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
	int n; cin>> n;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	int right = n;
	vector<int> index(n+1,0);
	int count =0;
	for(int i =0;i<=n;i++){
		if(i!=0){
			if(a[i]<right){
				count++;
			} if( a[i]==right){
				while(right>0){
					right--;
					if(index[right]==1) count--;
					else break;
				}
			}
		index[a[i]]=1;
		}
		cout<<(count+1)<<" ";
	}

	cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
