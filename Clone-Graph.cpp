/*

Clone an undirected graph. Each node in the graph contains a label and a list of its neighbors.


OJ's undirected graph serialization:
Nodes are labeled uniquely.

We use # as a separator for each node, and , as a separator for node label and each neighbor of the node.
As an example, consider the serialized graph {0,1,2#1,2#2,2}.

The graph has a total of three nodes, and therefore contains three parts as separated by #.

First node is labeled as 0. Connect node 0 to both nodes 1 and 2.
Second node is labeled as 1. Connect node 1 to node 2.
Third node is labeled as 2. Connect node 2 to node 2 (itself), thus forming a self-cycle.
Visually, the graph looks like the following:

       1
      / \
     /   \
    0 --- 2
         / \
         \_/

*/


/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:

    void dfs(UndirectedGraphNode *p, map<UndirectedGraphNode*, UndirectedGraphNode*>&mp)
    {
        if(!p) return ;
        
        if(mp.find(p)==mp.end())//not visited
        {
            
            UndirectedGraphNode* p_new = new UndirectedGraphNode(p->label);
            mp[p] = p_new;
            for(int i=0;i<p->neighbors.size();i++)
            {
                if(mp.find(p->neighbors[i])==mp.end())//not visited
                    dfs(p->neighbors[i], mp);
            }
        }
        
        return;
    }
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(!node) return 0;
        map<UndirectedGraphNode*, UndirectedGraphNode*>mp;
        UndirectedGraphNode *head = node;
        dfs(node, mp);
        map<UndirectedGraphNode*, UndirectedGraphNode*>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            UndirectedGraphNode*p=it->first;
            int n = p->neighbors.size();
            mp[p]->neighbors.resize(n);
            for(int i=0;i<n;i++)
            {
                mp[p]->neighbors[i] = mp[p->neighbors[i]];
            }
        }
        
       UndirectedGraphNode*p_head =  mp[head];
       mp.clear();
       return p_head;
    }
};

