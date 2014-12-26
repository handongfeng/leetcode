/*
Search Insert Position
Search Insert Position

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.
Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0
*/

// method 1: O(n)
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        
        int index = 0;
        for(int i=0;i<n;i++)
        {
            if(target>A[i]) index++;
        }
        return index;
    }
};


// method 2: O(logn)
class Solution {
public:
    int bs(int A[], int st, int end, int target)
    {
        if(st>end) return st;
        int mid = (end-st)/2+st;
        if(target==A[mid])
        {
            return mid;
        }
        else if( target>A[mid])
        {
            return bs(A, mid+1,end,target);
        }
        else
        {
            return bs(A, st, mid-1, target);
        }
        
        
    }
    int searchInsert(int A[], int n, int target) {
        
        int index = bs(A,0,n-1, target);
        return index;
        
    }
};
