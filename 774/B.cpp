#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t,n,a,right;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> temp;
        for(int i=0;i<n;i++){
            cin>> a;
            temp.push_back(a);
        }
        sort(temp.begin(), temp.end());
        vector<long long> left{0}, right{0};
        for(int i=0;i<n;i++)
            left.push_back(left.back()+ temp[i]);
        for(int i=n-1;i>=0;i--){
            right.push_back(right.back()+ temp[i]);
        }
        bool result = false;
        for(int k = 1;k<=n;k++){
            if(2*k+1<=n){
                if(left[k+1]< right[k]){
                    result = true;
                    break;
                }
            }
        }
        if(result)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;	
}