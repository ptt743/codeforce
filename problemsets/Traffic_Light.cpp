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
  char c;
	cin>> n>> c;
	string s;
	cin>>s;
	vector<int> green_index;
  int result = 0;
	for( int i=0;i<n;i++)if(s[i]=='g')green_index.push_back(i);
	for(int i =0;i< n;i++){
		if(s[i]==c){
			auto it = lower_bound(green_index.begin(), green_index.end(), i);
			if(it!=green_index.end()){
				result = max(result, int((*it) - i));
			} else {
				result = max(result, int(green_index[0]+ n - i));
			}
		}
	}
	cout<<result<<endl;
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
