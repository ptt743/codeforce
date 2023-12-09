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
	int n;
	cin >> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	
	auto find = [&](int left, int right, int value)-> int{
		while(left <=right){
			int mid  = (left + right)/2;
			if(a[mid] >= value) left = mid+1;
			else right = mid-1;
		}
		return right;
	};
	bool check = true;
	int count=0;
	for(int i = n-1; i>=0;i--){
	 	int length = find(0, n-1,++count);
		if(length +1 != a[n-1-i]) { check = false; break;}
	}
	if(check) cout<< "YES"<<endl;
	else cout<<"NO"<<endl;
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
