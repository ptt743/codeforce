#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
using namespace std;
typedef long long ll;
ll n,m,sum;
vector <ll> r[100001],c[100001];
int main(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            ll cl;
            cin >> cl;
            r[cl].push_back(i);
            c[cl].push_back(j);
        }
    }
    for (int i=1;i<=100000;i++) sort(c[i].begin(),c[i].end());
    for (int i=1;i<=100000;i++){
        for (int j=0;j<r[i].size();j++) sum+=r[i][j]*j-r[i][j]*(r[i].size()-j-1);
        for (int j=0;j<c[i].size();j++) sum+=c[i][j]*j-c[i][j]*(c[i].size()-j-1);
    }
    cout << sum << "\n";
}