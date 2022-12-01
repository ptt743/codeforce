#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n = s.size();
	vector<int> arr(n);
	vector<int> mm(n+1,9);

	for( int i=0;i< n;i++){
		arr[i] = s[i]-'0';
	}
	for(int i = n-1;i >=0;i--){
		mm[i] = min(mm[i+1], arr[i]); 
	}
	string result="";
	vector<int> buff(10,0);
	for( int i=0;i< n;i++){
		for( int j =0;j< mm[i];j++){
			while(buff[j]){
				buff[j]--;
				result+=(j+'0');
			}
		}
		if(mm[i]== arr[i]) result+= s[i];
		else buff[min(arr[i]+1,9)]++;
	}
	for( int i=0;i<10;i++) {
		while(buff[i]){
			buff[i]--;
			result+=i +'0';
		}
	}
	cout<<result<<endl;


}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
