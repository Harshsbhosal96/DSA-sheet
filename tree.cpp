// Path Sum Problem Binary tree
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode (int x) : val(x), left(nullptr), right(nullptr) {}
};

bool hasPathSum( TreeNode *root, int targetSum ){
  if ( !root ) return false;
targetSum -= root->val;
return hasPathSum(root->left, targetSum) || 
  hasPathSum(root->right, targetSum) ||
  (targetSum == 0 && !root->left && !root->right)
  }


//helper function to build a demo tree

TreeNode * buildDemoTree(){
  TreeNode *root = new TreeNode(5);
  root->left = new TreeNode(4);
  root->left->left = new TreeNode(11);
root->left->left->left = new TreeNode(7);
root->left->left->right = new TreeNode(2);
root->right = new TreeNode(8);
root->right->right = new TreeNode(4);
root->right->right->right = new TreeNode(1);
root->right->left = new TreeNode(13);
  return root;
}

// The driver code goes about from here

int main(){
  TreeNode *root = buildDemoTree();
int targetSum;
cin>> "enter the targetSum"<<endl;
cin>>targetSum;

if(hasPathSum(root, targetSum)){
cout<<"valid"<<targetSum<<endl;
}
else{
cout<<"otherwise"<<targetSum<<endl;
}
return 0;
}

  


  

