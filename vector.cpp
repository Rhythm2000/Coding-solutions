#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r=5;
    int c=5;
    int num=10;
    vector<vector<int>> vec;
    for(int i=0;i<r;i++)
    {
        vector<int> v1;
        for(int j=0;j<c;j++)
        {
             v1.push_back(num);
             num+=5;
        }
        vec.push_back(v1);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}