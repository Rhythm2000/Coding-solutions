#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned int n;
        cin>>n;
        unsigned int a[n]={0},n1=0,n2=0;
        for(unsigned int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                n1++;
            }
            else
              n2++;
        }
        if(n1%2==0&&n2%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
}