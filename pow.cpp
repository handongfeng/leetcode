class Solution {
public:
    double pow(double x, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
    	
		if(x==0&& n==0) return 1;
		else if(x==0 && n!=0) return 0;
		else if(n==0) return 1;
		
		double s= 	pow( x,  n/2);
		
		if(n%2==0)
		{
			return (s*s);
		}
		else
		{
			if(n>0)
             return (s*s)*x;
            else
             return (s*s)/x;
		}
				
    }
};