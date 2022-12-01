#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,k,P;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<long long> L(n+1,0);
		for( int i=1;i<=n;i++) cin>> L[i];
		P = L[k];
		L[k]=0;
		vector<long long> ps(n+1,0);
		ps[0]=0;
		for(int i=1;i<=n;i++)ps[i] = ps[i-1]+ L[i];
		int l = k-1, r = k;
		vector<pair<long long, long long>> LG, RG;
		for(int i = k-2; i>=0 ;i--){
			long long worst = 0, cur= 0;
			if(ps[i]<=ps[l] ||i==0){
				for( int j = l;j>=i+1;j--){
					cur+=L[j];
					worst = min(worst, cur);
				}
				LG.push_back(make_pair(cur, -worst));
				l=i;
			}
		}
                for(int i = k +1; i<=n ;i++){
			long long worst = 0, cur= 0;
			if(i==n ||ps[r]<=ps[i]){
				for( int j = r+1;j<=i;j++){
					cur+=L[j];
					worst = min(worst, cur);
				}
				RG.push_back(make_pair(cur, -worst));
				r=i;
			}
		}
		reverse(LG.begin(), LG.end());
    		reverse(RG.begin(), RG.end());
 
    		long long curp = P;
    		while (true) {
        		bool acted = false;
      			 if (!LG.empty() && curp >= LG.back().second) {
            			curp += LG.back().first;
            			LG.pop_back();
            			acted = true;
       	 		}
        		if (!RG.empty() && curp >= RG.back().second) {
            			curp += RG.back().first;
            			RG.pop_back();
            			acted = true;
        		}
        		if (LG.empty() || RG.empty()) {
            			cout << "YES\n";
	    			break;
        		}
        		if (!acted) {
            			cout << "NO\n";
            			break;
        		}	 
    		}
 
 
	}
	return 0;
}
