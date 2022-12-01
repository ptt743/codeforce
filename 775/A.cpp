#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int solve( vector<int> a, int n){
    int coins=0;
    int temp=0;
    int count=0;
    for( int i=0;i<n;i++){
        if(a[i]==1){
            if(temp!=0){
                coins+= (temp+1);
                count++;
            }
            temp=0;
        }else {
            temp++;
        }
    }
    if(count<=1) return coins;
    int left=0;
    int right=n-1;
    while(a[left]!=0) left++;
    while(a[right]!=0) right--;
    return (right+1 - (left-1));
    
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i< n;i++){
            cin>>a[i];
        }
    cout<<solve(a,n)<<endl;

    }
    return 0;	
}