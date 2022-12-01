#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int solve( vector<long long> a, int n){
    long long m=0;
    long long sum=0;
    for(int i=0;i< a.size();i++){
        sum+= a[i];
        m = max(m,a[i]);
    }
    if(sum==0) return 0;
    else if( sum - m >= m-1) return 1;
    else  return 1+ m - 1 - (sum-m);
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> a(n,0);
        for(int i=0;i<n;i++) cin>> a[i];
        cout<<solve(a,n)<<endl;
    }
    return 0;	
}