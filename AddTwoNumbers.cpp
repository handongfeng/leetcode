
 ListNode* node1=l1;
ListNode* node2=l2;

ListNode* node3=0;


ListNode* root=0;

int mode =0;
int left =0;
while (node1 && node2)
{
    
    int v1 = node1->val;
    int v2 = node2->val;
	
    int sum = v1 + v2 + mode;
	
	mode = sum/10;
	left = sum%10;
		
	ListNode* node = new ListNode(0);
	node->val = left;
    
    if(!root){
      root = node;
      node3= root;
    } 
	else{
		node3->next = node;
		node3=node;
	}

		
	node1 = node1->next;
	node2 = node2->next;
}

while (node1)
{
	int v1 = node1->val;
	
	int sum =v1 + mode;
	
	mode = sum/10;
	left = sum%10;
	
	
	ListNode* node = new ListNode(0);
	node->val = left;

     if(!root){
      root = node;
      node3= root;
    } 
   	else{
		node3->next = node;
		node3=node;
	}
		
	node1 = node1->next;
}
while (node2)
{
	int v2 = node2->val;
	
	int sum =v2 + mode;
	
	mode = sum/10;
	left = sum%10;
	
	
	ListNode* node = new ListNode(0);
	node->val = left;
    
      if(!root){
      root = node;
      node3= root;
    } 
   	else{
		node3->next = node;
		node3=node;
	}
		
	node2 = node2->next;
}

if(mode!=0)
{
	ListNode* node = new ListNode(0);
	node->val = mode;
	 if(!root){
      root = node;
      node3= root;
    } 
   	else{
		node3->next = node;
		node3=node;
	}
}

return root;
 
 