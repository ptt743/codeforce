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
	int h,w;
	cin>> h >> w;
	vector<string> a(h);
	for(int i =0;i< h;i++) cin>> a[i];
	int x = 0, y= 0;
	for(int i =1;i<h-1;i++){
		for(int j =1;j< w-1;j++){
			if(a[i][j] =='*' && a[i-1][j]=='*' && a[i+1][j]=='*' && a[i][j-1] =='*' && a[i][j+1]=='*'){
				x = i, y = j;
				break;
			}

		}
	}
	if(x==0 && y==0){
		cout<<"NO"<<endl;
		return;
	}
	vector<vector<bool>> visited(h,vector<bool>(w,false));
	int temp  = x;
	while(temp>=0 && a[temp][y]=='*') {visited[temp][y] = true; temp--;}
	temp = x;
	while(temp<h && a[temp][y]=='*'){visited[temp][y] = true; temp++;}
	temp = y;
	while(temp>=0 && a[x][temp]=='*') {visited[x][temp] = true; temp--;}
	temp = y;
	while(temp<w && a[x][temp]=='*') {visited[x][temp] = true; temp++;}
	bool check = true;
	for(int i =0;i< h;i++)
		for(int j =0;j< w;j++)
			if(a[i][j]=='*' && visited[i][j]==false){
				check = false;
				break;
			}
	if(!check) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;



}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
