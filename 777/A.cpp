#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;

void solve( int n){
    string result;
    int a=1;
    if(n%3==1)a=1;
    else a=2;
    while(n>0){
        n-=a;
        if(n>=0)result += to_string(a);
        a=3-a;
    }
    cout<<result<<endl;
}

int main(){
    int t,n ;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
    }

    return 0;	
}