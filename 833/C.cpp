#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;
//*****taipt*****//

void solve(){
	 int n ;
	 cin>>n;
	 vector<long long> a(n+1), preffix(n+1);
	 unordered_map<long long , long long> mp;
	 long long sum =0;
	 long long result=0, fregent=1;
	 bool found_wildCard=false;
	 for( int i=1;i<=n;i++) {
	 	cin>> a[i];
		if( a[i]==0){
			if(found_wildCard) result+= fregent;
			else result+= mp[0];
			found_wildCard = true;
			mp.clear();
			fregent=0;
		}
		sum+=a[i];
		fregent = max(fregent, ++mp[sum]);
	 }
	 if(found_wildCard) result+= fregent;
	 else result+= mp[0];
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
