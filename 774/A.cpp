#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int solve(long long n, long long s){
    int result=0;
    long long temp = n*n;
    return s/n;
}

int main(){
    int t;
    long long  n;
    long long s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        cout<<solve(n,s)<<endl;
    }
    return 0;	
}