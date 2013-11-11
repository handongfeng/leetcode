


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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
		
		
		
	// begin	
int sizea= a.size();
int sizeb= b.size();

reverse(a.begin(),a.end());
reverse(b.begin(),b.end());


string c;
int i = 0;
int j = 0;

int mod =0;
int left =0;
while(i<sizea && j<sizeb)
{
	
	int aa = a[i]-'0';
	int bb = b[j]-'0';
	int sum = aa+bb+mod;
	
	left= sum%2;
	mod = sum/2;
	if (left==0) c.push_back('0');
	else c.push_back('1');
	
	i++;
	j++;
}

if(sizea==sizeb)
{
	if (mod==1)
	{
		c.push_back('1');
	}
	reverse(c.begin(),c.end());
	return c;
}
if(sizea>sizeb)
{
	i = sizeb;
	while(i<sizea)
	{
		int aa = a[i]-'0';
		int sum = aa+mod;
	
		left= sum%2;
		mod = sum/2;
		if (left==0) c.push_back('0');
		else c.push_back('1');
		i++;
	}
	if (mod==1)
	{
		c.push_back('1');
	}
	reverse(c.begin(),c.end());
	return c;
}
else
{
	i = sizea;
	while(i<sizeb)
	{
		int bb = b[i]-'0';
		int sum = bb+mod;
	
		left= sum%2;
		mod = sum/2;
		if (left==0) c.push_back('0');
		else c.push_back('1');
		i++;
	}
	if (mod==1)
	{
		c.push_back('1');
	}
	reverse(c.begin(),c.end());
	return c;
	
}





// end
		
		
    }
};







