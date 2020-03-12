// printing any one lcs in case there are more than one lcs


#include<bits/stdc++.h>
using namespace std;
#define d 50


int lookup[d+1][d+1];


string printlcs(string str1,string str2,int len1,int len2,auto &lookup)
{
    if(len1==0||len2==0)
    return string("");
    
    if(str1[len1-1]==str2[len2-1])
    return printlcs(str1,str2,len1-1,len2-1,lookup)+str1[len1-1];
    
    if(lookup[len1-1][len2]>lookup[len1][len2-1])
    return printlcs(str1,str2,len1-1,len2,lookup);
    
    if(lookup[len1-1][len2]<=lookup[len1][len2-1])
    return printlcs(str1,str2,len1,len2-1,lookup);
    
    
    
}

void lcs(string str1,string str2,int len1,int len2,auto &lookup)
{
    if(len1==0||len2==0)
    return ;
    
    for(int i=0;i<=len1;i++)
    {
        lookup[i][0]=0;
    }
    for(int i=0;i<=len2;i++)
    {
        lookup[0][i]=0;
    }
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            lookup[i][j]=lookup[i-1][j-1]+1;
            else
            lookup[i][j]=max(lookup[i-1][j],lookup[i][j-1]);
        }
    }
    
    
    
    
}

int main()
{
      
  string str1,str2;
  str1="ABCBDAB";
  str2="BDCABA";
  int n=str1.size();
  int m=str2.size();
 
  
  lcs(str1,str2,str1.size(),str2.size(),lookup);
  
  cout<<printlcs(str1,str2,str1.size(),str2.size(),lookup)<<endl;
  
  
}