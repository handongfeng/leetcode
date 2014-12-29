/*
Anagrams
Given an array of strings, return all groups of strings that are anagrams.

Note: All inputs will be in lower-case.
*/




class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        
        vector<string> res;
        map<string,int> mp;
        int n= strs.size();
        
        for(int i=0;i<n;i++)
        {
            string str = strs[i];
            sort(str.begin(),str.end());
            if(mp.find(str)!=mp.end())
            {// found
                res.push_back(strs[i]);
                if(mp[str]!=-1)
                {
                    res.push_back(strs[mp[str]]);
                    mp[str]=-1;
                }
                
            }
            else
            {
                mp[str]=i;
            }
        }
        return res;
  
  
    }
};
