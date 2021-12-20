#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> v={10,16,7,14,5,3,12,9};
    vector<int> v1=v;
    sort(v1.begin(),v1.end());
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v1.size();j++)
        {
            if(v[j]==v1[i])
            {
               v[j]=i;
            }
        }
    }
    for(auto k:v)
    {
        cout<<k<<" ";
    }
}