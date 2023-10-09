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
struct CustomComparator {
    bool operator() (const string& a, const string& b) const {
        // Sắp xếp theo thứ tự giảm dần
        return (a.size()<b.size() || (a.size()==b.size() && a<b));
    }
};

string ins(string pre){
	int carry = 1;
	for (int i = pre.length() - 1; i >= 0; --i) {
        if (pre[i] == 'z') {
            pre[i] = 'a';
        } else {
            pre[i]++;
            carry = 0;
            break; // Khi tìm được ký tự không cần carry, thoát vòng lặp
        }
    }

    if (carry) {
        pre = 'a' + pre;
    }
    return pre;
}
void solve(){
	int n;
	cin>> n;
	string s;
	cin>> s;
	set<string,CustomComparator> st;
	for(int i =0;i< n;i++){
		for(int j = i;j< n;j++){
			st.insert(s.substr(i,j-i+1));
		}
	}
	string pre ="`";
	for(string item : st){
			if(ins(pre)!= item){break;}
			pre = item;
	}
	cout<<ins(pre)<<endl;
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
