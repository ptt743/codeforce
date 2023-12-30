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
const int base = 31;
const ll MOD = 1000000003;
const ll maxn = 1000111;

using namespace std;
//*****taipt*****//
/*
*/
ll POW[maxn], hashT[maxn];

ll getHashT(int i,int j) {
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

void solve(){
	string s;
	cin>> s;
	string a,b;
	cin>> a >> b;
	
	string temp = s;
	reverse(temp.begin(), temp.end());
	s+= temp;
	int lens = s.size(), lena = a.size(), lenb = b.size();
    	s = " " + s;
   	a = " " + a;
	b = " " + b;
    	POW[0] = 1;

	for (int i = 1; i <= lens; i++)
    		POW[i] = (POW[i - 1] * base) % MOD;
	for (int i = 1; i <= lens; i++)
    		hashT[i] = (hashT[i - 1] * base + s[i] - 'a' + 1) % MOD;

	ll hasha=0;
    	for (int i = 1; i <= lena; i++)
    		hasha = (hasha * base + a[i] - 'a' + 1) % MOD;

	ll hashb=0;
    	for (int i = 1; i <= lenb; i++)
    		hashb = (hashb * base + b[i] - 'a' + 1) % MOD;
	ll hashs[2] = {hasha, hashb};
	bool left = false, right = false;
	int index = 0;
	int lentemp = lena;
	for (int i = 1; i <= lens/2 - lentemp + 1; i++){
		if (hashs[index] == getHashT(i, i + lentemp - 1)){
			index++;
			i = i + lentemp-1;
			lentemp = lenb;
		}
		if(index==2){
			left = true;
			lentemp = lenb;
			break;
		}
	}
	index=0;
	lentemp = lena;
	for(int i =lens/2+1;i<= lens - lentemp +1;i++){
		if(hashs[index]== getHashT(i, i + lentemp-1)){
			index++;
			i = i + lentemp -1 ;
			lentemp = lenb;
		}
		if(index==2){
			right = true;
			break;
		}
	}
	if(left && right) { cout<<"both"<<endl;}
	else if (left) cout<<"forward"<<endl;
	else if (right) cout<<"backward"<<endl;
	else cout<<"fantasy"<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
