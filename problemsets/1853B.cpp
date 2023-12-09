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
	long long n,k;
	cin>> k >> n;
	int result=0;
	for(long long i = 0;i<=k/2; i++){
		long long first = k - i;
		long long second = i;
		int count =3;
		while(first >0 && second >0 && second <= first){
			long long temp = first - second;
			first = second;
			second = temp;
			if(first>=0 && second >=0 && second <= first)count++;
			if( count==n)break;
		}
		if(count>=n) result++;
	}
	cout<< result<<endl;
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
