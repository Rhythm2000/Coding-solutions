#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int f[91]={0};
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        for(int i=0;i<n;i++)
        {
            f[s[i]]++;
        
        }
        int i=0,count=1,flag=1;
        while(i<n-1)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else if(f[s[i]]==count)
            {
                i++;
                count=1;
            }
            else if(f[s[i]]!=count)
            {
                cout<<"NO"<<endl;flag=0;
                break;
                
            }
            i++;
            
        }
        if(flag==1)
           cout<<"YES"<<endl;
        t--;
    }
}