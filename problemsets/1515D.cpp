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
	int n, l, r;
	cin>> n>>l>>r;
	vector<int> a(n+1);
	for(int i=0;i< n;i++){
		int c;
		cin>> c;
		if(i<l){a[c]--;}
		else a[c]++;
	}
	int sl = 0, sr = 0;
	for(int i =1;i<=n;i++){
		if(a[i]>0) sr+=a[i];
		else sl-=a[i];
	}
	int money=0;
	int di = abs(sl-sr)/2;
	bool  check = (sr>sl)? true: false;

	int cou = 0;
	if(check){
		for(int i =1;i<= n;i++){
			if(a[i]>0 && a[i]>=2){ 
				cou+= a[i]/2; 
			}
		}
	}else{
		for(int i =1;i<= n;i++){
			if(a[i]<0 && a[i]<=-2){ cou-= a[i]/2;}
		}
	}
	if(cou> di) money+=di,di = 0;
	else di-=cou, money+=cou;
	money+= min(sr,sl);
	if(di>0) money +=di*2;
	cout<< money<<endl;

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
