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
int x,y,z,l,n;
const int N = 1e6;
int a[N], p[N], s[N];
int S(int l,int r)
{
	if((p[r]-p[l-1])%2==0&&s[r]-s[l-1]>z)
		z=s[r]-s[l-1],x=l-1,y=n-r;
	return 0;
}

void solve(){
	cin >> n;
	for(int i =1;i<=n;i++){ 
		cin>> a[i];
		p[i] = p[i-1] + (a[i]<0);
		s[i] = s[i-1] + (abs(a[i])>1);
	}
	x = n, y= z = l = a[n+1] = 0;
	for(int i =1;i<=n+1;i++){
		if(a[i]==0){
			for(int j = l+1;j<i;j++){
				S(l+1, j),S(j,i-1);
			}
			l=i;
		}
	}
	cout<< x << " "<<y<<endl;
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
