#include <bits/stdc++.h>

using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
 	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	

    static ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        int temp = -101;
        ListNode* holder = head;
        ListNode* iter = head;
        
        while(iter != NULL){
            if(iter->val != temp){
                holder = iter;
                temp = holder->val;
            }
            else if(iter->val == temp){
                
                holder->next = iter->next;
                
            }
            iter = iter->next;
        }
        return head;
    }
};

void Print(ListNode *list){
    while(list != NULL){
        cout<< list->val;
        list = list->next;
    }
}

int main()
{
	ListNode list3(2);
	ListNode list2(1, &list3);
	ListNode list1(1, &list2);
	ListNode* head = &list1;
	Solution::deleteDuplicates(head);
    Print(head);
	
	cout<<endl;
	return 0;
}
//  Definition for singly-linked list.
 

