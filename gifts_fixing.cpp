#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m1=1000000000,m2=1000000000,count=0;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<m1)
               m1=a[i];
              
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]<m2)
               m2=b[i];
        }
        
        long long int da,db;
        for(int i=0;i<n;i++)
        {
           da=a[i]-m1,db=b[i]-m2;
           count+=max(da,db);
           
        }
        cout<<count<<endl;
    }
}