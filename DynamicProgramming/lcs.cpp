// longest common subsequence 
// complexity = 2^(m+n)=2^N
//here implementation without using dp

#include<bits/stdc++.h>
using namespace std;



int lcs(string str1,string str2,int len1,int len2)
{
    if(len1==0||len2==0)
    return 0;
    
    if(str1[len1-1]==str2[len2-1])
    return lcs(str1,str2,len1-1,len2-1)+1;
    else
    return max(lcs(str1,str2,len1-1,len2),lcs(str1,str2,len1,len2-1));
    
    
}





int main()
{
    
  string str1,str2;
  str1="ABCBDAB";
  str2="BDCABA";
  cout<<lcs(str1,str2,str1.size(),str2.size())<<endl;
    
    return 0;
}
