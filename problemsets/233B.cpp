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
	long long n;
	cin>> n;
	auto sum =[&](long long x)->int{
		int sum =0;
		while(x>0){
			sum += x%10;
			x/=10;
		}
		return sum;
	};
	for(int i =0;i<=90;i++){
		long long alpha = i*i +(long long)4*n;
		long long x = (-i +sqrt(alpha))/2;
		if(x*x + i*x -n==0){
			if(sum(x)==i){
				cout<< x<<endl;
				return;
			}
		}
	}
	cout<<"-1"<<endl;

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
