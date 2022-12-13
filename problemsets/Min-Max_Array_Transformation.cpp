#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
a 2 3 5 
b 7 11 13
find the min and max as posible in each index in array d.
10 20 30 40
22 33 33 55
///// simple solution
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		for(int i=0;i<n;i++)cout<<*lower_bound(b,b+n,a[i])-a[i]<<' ';
		cout<<endl;
		int ind=0;
		for(int i=0;i<n;i++){
			ind=max(ind,i);
			while(ind<n-1&&a[ind+1]<=b[ind])ind++;
			cout<<b[ind]-a[i]<<' ';
		}
		cout<<endl;
	}
}
*/
void solve(){	
	int n;
	cin>> n;
	vector<int> a(n), b(n), result(n);
	for( int i =0;i<n;i++) cin>> a[i];
	for( int i=0;i<n;i++) cin>>b[i];
	for( int i=0;i<n;i++){
		auto it = lower_bound(b.begin(), b.end(), a[i]);
		result[i] = b[it - b.begin()] - a[i];
		cout<<result[i]<<" ";
	}
	cout<<endl;
	int left=0;
	int temp =b[0];
	for(int i =0;i<n;i++){
		if(left<i) left=i;
		while(left<n){
			if( *lower_bound(b.begin(), b.end(), a[left])<= temp){
			        temp  = b[left];
				left++;
			}
			else{ 
				temp = b[left];
				break;
			}
		}
		left--;
		result[i] =b[left] - a[i];
		cout<<result[i]<<" ";
	}
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
