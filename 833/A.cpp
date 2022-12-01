#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;
//*****taipt*****//

void solve(){
	int n;
	cin>> n;
	long long result=0;
	long long first = n/2;
	if(n%2!=0) first+=1;
	if((n+1)/2>= first) result = first;
	else result = first-1;
	cout<<result;
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
