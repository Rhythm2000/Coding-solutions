#include <iostream>
#include <algorithm>

using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main()
{
    long long int t;
    cin>>t;
    while(t!=0)
    {
        unsigned int a,b,c;
        cin>>a>>b>>c;
        if(unsigned int x=(a+b+c)%9!=0||std::min({a,b,c},comp)<=x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        t--;
    }
}