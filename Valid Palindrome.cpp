class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int l =abs('a'-'A');
    	int n= s.size();
		if(n<=1) return true;
		
		int i =0;
		int j =n-1;
		
		bool ifPalindrome=true;
		while(i<=j)
		{
		   while(i<n)
		   {
			if(  !(  isalnum (s.at(i)) )  )
			{
				i++;
			}
			else
			   break;
		    }
		  while(j>=0)
		  {
	      	if(  !(  isalnum (s.at(j)) )  )
			{
				j--;
			}
			else
			  break;
		  } 	
		   
		  if(i<=j)
		  {
		     if(s[i]!=s[j] && abs(s.at(i)-s.at(j))!=l)
			{
				ifPalindrome = false;
				break;
			}
			else
			{
				i++;
				j--;
			}
		  }
		  else
			break;		  
	    }
		
		return ifPalindrome;
    }
};