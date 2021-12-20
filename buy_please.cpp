#include<iostream>
using namespace std;
int main()
{
    long long int pen,pencil,x,y;
    long long int cost;
    cin>>pen>>pencil>>x>>y;
    cost = pen*x+pencil*y;
    cout<<cost;
    return 0;
}