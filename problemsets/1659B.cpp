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
	string s;
	cin>> s;
	vector<int> a(n,0);
	for(int i =0;i< n;i++) a[i] = s[i]-'0';
	vector<int> result(n,0);
	int count = k;
	for(int i =0;i< n;i++){
		if(count>0){
			if(i==n-1){
				if((k%2==0 && count%2!=0) || (k%2!=0 && count %2==0)) a[i] = 1- a[i];
				result[i]+= count;
				continue;
			}
			if(a[i]==1 && k%2!=0){
				count--;
				result[i]++;
			}
			if(a[i]==1 && k%2==0) continue;
			if(a[i]==0 && k%2!=0){
				a[i] = 1; 
				continue;
			}
			if(a[i]==0 && k%2==0){
				count--;
				result[i]++;
				a[i]=1;
			}

		} else {
			if(k%2!=0) a[i] = 1- a[i];
		}
	}
	for(int i =0;i< n;i++) cout<< a[i];
	cout<<endl;
	for(int i =0;i< n;i++) cout<< result[i] << " ";
	cout<<endl;
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
