/*A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.

Return a deep copy of the list.
*/

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
    
        if(!head) return 0;
    
        map<RandomListNode *, RandomListNode *>mp;
        RandomListNode *p=head;
        while(p)
        {
            RandomListNode *p_new = new RandomListNode(p->label);
            mp[p]=p_new;
            p=p->next;
        }
        p= head;
        while(p)
        {
            mp[p]->next = mp[p->next];
            mp[p]->random = mp[p->random];
            p=p->next;
        }
        
         RandomListNode *p_head =  mp[head];
         mp.clear();
         return  p_head;
    }
};
