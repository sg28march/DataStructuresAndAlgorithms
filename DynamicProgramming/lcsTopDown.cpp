// lcs top down
// complexity is O(mn)

#include<bits/stdc++.h>
using namespace std;



int lcs(string str1,string str2,int len1,int len2,auto &lookup)
{
    if(len1==0||len2==0)
    return 0;
    
    string key=to_string(len1)+'|'+to_string(len2);
    
    if(lookup.find(key)==lookup.end())
    {
    
    if(str1[len1-1]==str2[len2-1])
    lookup[key]=  lcs(str1,str2,len1-1,len2-1,lookup)+1;
    else
    lookup[key]= max(lcs(str1,str2,len1-1,len2,lookup),lcs(str1,str2,len1,len2-1,lookup));
    }
    
    return lookup[key];
    
}





int main()
{
    
    // create  a map for lookup for subproblems
    unordered_map<string,int> lookup;
    
  string str1,str2;
  str1="ABCBDAB";
  str2="BDCABA";
  cout<<lcs(str1,str2,str1.size(),str2.size(),lookup)<<endl;
    
    return 0;
}