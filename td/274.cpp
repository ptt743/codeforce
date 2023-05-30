#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/

struct node{
  int val;
  node *left, *right;
  node(int key){
    val = key;
    left = right = nullptr;
  }
};

node* addNode(node* root, int val){
  if(root== nullptr){
    root = new node(val);
    return root;
  }
  if( val < root->val){
    root->left = addNode(root->left, val);
  } else {
    root->right = addNode(root->right, val);
  }
  return root;
}

bool solve(node* left, node* right){ 
  if(left==nullptr && right==nullptr) return true;
  else if ((right!=left)&&(right==nullptr||left==nullptr)) return false;
  if(left->val!= right->val) return false;
  return solve(left->left, right->left) && solve(left->right, right->right);

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    node* left = nullptr, *right = nullptr;
    int n ;
    cin>> n;
    for( int i =0;i< n;i++){
      int t; cin>> t;
      left = addNode(left, t);
    }
    for(int i =0;i<n;i++){
      int t; cin>> t;
      right = addNode(right,t);

    }
    cout<<solve(left,right)<<endl;
    return 0;
}
