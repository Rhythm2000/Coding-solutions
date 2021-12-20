#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,x,sum1=0,sum2=0;
       
        cin>>n>>x;
        unsigned int a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
            sum2+=ceil((a[i]*1.0)/x);
        } 
        cout<<ceil((sum1*1.0)/x)<<" "<<sum2;
        cout<<"\n";
    }
    return 0;
}