#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag,length=1,start;
    for(int i=0;i<s.length();i++)
    {
        
        for(int j=i;j<s.length();j++)
        {
            flag=1;  
            for(int k=0;k<j-i+1;k++)
            {
                if(s[i+k]!=s[j-k])
                {
                    flag=0;
                }
            }
            if(flag&&(j-i+1)>length)
            {
                start=i;
                length=j-i+1;
            }
        }
    }
    for(int i=start;i<start+length;i++)
    {
        cout<<s[i];
    }
    
}