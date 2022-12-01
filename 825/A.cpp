#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> a(n), b(n);
	int count_equal=0;
	int count_a=0;
	int count_b=0;
	for( int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1) count_a++;
	}
	for( int i=0;i< n;i++){
		cin>>b[i];
		if(b[i]==1) count_b++;
		if(b[i]==1 && b[i]==a[i]) count_equal++;
	}
	int result=0;
	if(count_a<count_b) result = count_b - count_a+ ((count_equal==count_a)?0:1);
	else{
		result = count_a - count_b+ ((count_equal==count_b)?0:1);
	}
	cout<< result<<endl;
}	
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
