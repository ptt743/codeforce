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

const int N=1e5+3;
int a[N];
:
//*****taipt*****//
/*
*/
void solve(){
	int T,n,k,i,p,q,l;
	double w,s,u,v,e,f;

	scanf("%d%d",&n,&l),u=v=1,p=1,q=n,e=0,f=l,s=0;
		for(i=1;i<=n;++i)scanf("%d",a+i);
	 	while(1){
	 		if(p==q+1){
	 			s+=(f-e)/(v+u);
	 			break;
	 		}
	 		if((a[p]-e)/u<(f-a[q])/v){
	 			w=(a[p]-e)/u,s+=w,f-=v*w;
	 			e=a[p],++p,++u;
	 		}else{
	 			w=(f-a[q])/v,s+=w,e+=u*w;
	 			f=a[q],--q,++v;
	 		}
	 	}
	 	printf("%.9lf\n",s);
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
