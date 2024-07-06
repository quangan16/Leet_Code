#include "../globalInclude.h"

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* headRes = res;
        int mark = 0;
        while(l1 && l2){

            int temp = l1->val + l2->val + mark;
            mark = 0;
            if(temp >9){
                mark = 1;
                temp %= 10;
            }
           
            headRes->val = temp;
            if(l1!= nullptr && l2 != nullptr && l1->next!= nullptr && l2->next != nullptr){
                headRes->next = new ListNode(-1);
                headRes = headRes->next;
            }
             l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            if(mark){
                headRes->next = new ListNode(l1->val + 1);
            }
            else{
                headRes->next = new ListNode(l1->val);
            }
            
            l1 = l1->next;
            
        }
            
        while(l2){
            if(mark){
                headRes->val = l2->val + 1;
            }
            l2 = l2->next;
            headRes = headRes->next;
        }
        return res;
    }
};

int main(){
    Solution solution;
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    ListNode* res = solution.addTwoNumbers(l1, l2);
    while(res){
        std::cout<<res->val;
        res = res->next;
    }
    
}