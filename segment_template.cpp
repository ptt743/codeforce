#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

void solve(){
	vector<int> a={1,2,3,4,5,6,7,8,9};
	int n = a.size();
	int h  = (int)ceil(log2(n));
	int sizeTree = 2*(int)pow(2,h)-1;
	vector<int> segTree(sizeTree);

}

void buildTree(vector<int> & a, vector<int> &segTree, int left, int right, int index ){
	if(left==right){
		segTree[index] = a[left];
	}
	int mid = (right+left)/2;
	buildTree(a,segTree, left, mid, 2*index+1);
	buildTree(a, segTree, mid+1, right, 2*index+2);
	segTree[index] = segTree[2*index+1]+ segTree[2*index+2];
	
}

int sumRange(vector<int> & segTree, int left, int right, int from, int to, int index){
	if(left>=from && right<= to){
		return segTree[index];
	}
	if(left>to|| right<from) return 0;
	int mid  = (left+right)/2;
	return sumRange(segTree, left, mid, from, to, index*2+1)+ sumRange(segTree, mid+1, right, from, to , index*2+2);
}
 
int main() {

	
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
