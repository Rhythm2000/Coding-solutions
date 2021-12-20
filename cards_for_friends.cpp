#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t!=0)
    {
        long long int w,h,n,count=1;
        cin>>w>>h>>n;
        while(1)
        {
            if(w%2==0)
            {
                w=w/2;
                count*=2;
            }
            else if(h%2==0)
            {
                h=h/2;
                count*=2;
            }
            else
            {
                break;
            }
        }
        if(count>=n)
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
        t--;
    }
    return 0;
    
}