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
	int a,b,c;
	cin>> a >> b >> c;
	int temp1  = (b+c)-a;
	int temp2  = (b+a)-c;
	int temp3 = (c+a) -b;
	bool check = false;
	if(temp1 >=0 && temp1%2==0 && 
	   temp2 >=0 && temp2%2==0 &&
	   temp3 >=0 && temp3%2==0) check = true;
	if(check){
		cout<< temp2/2 << " "<< temp1/2 << " "<< temp3/2<<endl;
	} else cout<< "Impossible"<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
