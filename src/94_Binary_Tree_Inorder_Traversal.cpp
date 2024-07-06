#include "..\globalInclude.h"

using namespace std;

 struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution{
  public: 
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> res;
        stack<TreeNode*> stack;
        while(!stack.empty() ||  root != nullptr){
           while(root!= nullptr){
                stack.push(root);
                root = root->left;
           }
           res.push_back(stack.top()->val);
            stack.pop();
            
            root = stack.top()->right;
        }
         return res;
    }
   
};
int main(){
    Solution newSolution;
    vector<int> res;
    TreeNode* head = new TreeNode(1);
    head->left = new TreeNode(4);
    head->left->left = new TreeNode(7);
    head->left->right = new TreeNode(5);
    
    head->right = new TreeNode(2);
    head->right->left = new TreeNode(3);
    res = newSolution.inorderTraversal(head);
    for(int i : res){
        cout<<i;
    }
}