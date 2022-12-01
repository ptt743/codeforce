#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n ;
	cin>> n;
	vector<int> arr(n,0), s(n,0);
	int sum =0;
	for( int i=0;i< n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	if( sum%2!=0 || n%2!=0){
		cout<<"-1"<<endl;
		return;
	}
	int result=0;
	vector<pair<int,int>> ans;
	for(int i=1;i<n;i+=2){
		if(arr[i]==arr[i-1]){
			result++;
			ans.push_back(make_pair(i,i+1));
		}else{
			result+=2;
			ans.push_back(make_pair(i,i));
			ans.push_back(make_pair(i+1,i+1));
		}
	}
	cout<<result<<endl;
	for( int i=0;i< ans.size();i++){
		cout<< ans[i].first<<" "<<ans[i].second<<endl;
	}
}

void solve2(){
	int n ;
	cin>>n;
	vector<int>arr(n+1);
	int sum =0;
	for( int i =1;i<=n;i++) cin>>arr[i];
	for( int i=1;i<= n;i++) sum+= arr[i];
	if(sum%2!=0){
		cout<<"-1"<<endl;
		return ;
	}
	else{
		int count=0;
		int len=0;
		sum =0;
		vector<pair<int,int>> ans;
		for( int i=1;i<= n;i++){
			if(arr[i]!=0) count++;
			len++;
			sum+= arr[i]*(len%2==0?-1:1);
			if( count==2){
				if( sum==0){
					ans.push_back(make_pair(i-len+1,i));
				}
				else if(len%2==0){
					ans.push_back(make_pair(i - len+1, i-1));
					ans.push_back(make_pair(i,i));
				}
				else if ( len%2!=0 && arr[i-len+1]!=0){
					ans.push_back(make_pair(i-len+1, i-len+1));
					ans.push_back(make_pair(i-len+2,i));
				}
				else{
					ans.push_back(make_pair(i-len+1, i-len+1));
					ans.push_back(make_pair(i-len+2, i-1));
					ans.push_back(make_pair(i,i));
				}
				len=0;
				count=0;
				sum=0;
			}
		}
		if( len>0) ans.push_back(make_pair(n-len+1, n));
		cout<<ans.size()<<endl;
		for( auto a: ans){
			cout<<a.first<<" "<<a.second<<endl;
		}
	}
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve2();
    }
    return 0;
}
