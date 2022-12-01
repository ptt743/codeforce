#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	int n;
	string s;
	cin>> n;
	cin>> s;
	int result=0;
	for( int i=1;i< n;i++){
		int ind = abs((result%2)-(s[i] -'0'));
		int pre= abs((result%2)-(s[i-1]-'0'));
		cout<<ind<<" "<<pre<<endl;
		if(ind==0 && pre==1) {
			result++;
		}
	}
	cout<<result<<endl;

}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
