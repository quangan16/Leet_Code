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
   

    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;

        q1.push(p);
        q2.push(q);

        while(!q1.empty()  && !q2.empty()){
            TreeNode* temp1 = q1.front();
            TreeNode* temp2 = q2.front();
            if(temp1 != nullptr && temp2 != nullptr && temp1->val != temp2->val) return false;
            else if(temp1 == nullptr && temp2 != nullptr || temp1 != nullptr && temp2 == nullptr) return false;
            q1.pop();
            q2.pop();
           
            q1.push(temp1->left);
             
            q1.push(temp1->right);
             
            q2.push(temp2->left);
            
            q2.push(temp2->right);
        }
        if(!q1.empty() || !q2.empty()){
            return false;
        }
        return true;
    }
};

int main(){
    Solution newSolution;
    TreeNode* p = new TreeNode(1, new TreeNode(2), nullptr);
    TreeNode* q = new TreeNode(1, nullptr, new TreeNode(2));
    
    cout<< newSolution.isSameTree(p, q);
}