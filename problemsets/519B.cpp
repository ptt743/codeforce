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
	int n ;
	cin>> n;
	multiset<long long> a, b;
	long long first, second;
	for(int i =0;i< n;i++){
		long long t;
		cin>> t;
		a.insert(t);
	}

	for(int i =0;i< n-1;i++){
		long long t;cin>> t;
		b.insert(t);
		auto it  = a.find(t);
		a.erase(it);
	}
	for(int i =0;i< n-2;i++){
		long long t;cin>> t;
		auto it  = b.find(t);
		b.erase(it);
	}
	cout<< * a.begin()<<endl;
	cout<< * b.begin()<<endl;


}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
