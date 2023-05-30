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

void solve(node* root){ 
  queue<node*> qq;
  qq.push(root);
  stack<node*> st;
  int count=0;
  while(!qq.empty()){
    node* top = qq.front();
    cout<<top->val<<endl;
    count++;
    qq.pop();
    st.push(top);
    if(top->left!=nullptr) qq.push(top->left);
    if(top->right!=nullptr) qq.push(top->right);
  }
  while(!st.empty()){
    cout<<st.top()->val<<" ";
    st.pop();
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    node* root = nullptr;
    int n ;
    cin>> n;
    for( int i =0;i< n;i++){
      int t; cin>> t;
      root = addNode(root, t);
    }
    solve(root);
    return 0;
}
