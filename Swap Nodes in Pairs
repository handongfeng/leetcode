/*
leetcode Question 108: Swap Nodes in Pairs
Swap Nodes in Pairs

Given a linked list, swap every two adjacent nodes and return its head.
For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.
Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
*/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        
        ListNode* head1= new ListNode(0);
        head1->next =head;
        ListNode*p=head1;
        while(p->next && p->next->next)
        {
             ListNode* p1=p->next;
             ListNode* p2=p->next->next;
             ListNode* tmp = p2->next;
             
             p ->next =p2;
             p2->next =p1;
             p1->next =tmp;
             p= p1;
        }
        
        head = head1->next;
        delete head1;
        return head;
        
    }
};
