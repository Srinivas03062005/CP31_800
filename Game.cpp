#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int n;
    cin>>n;
    if((n+1)%3==0||(n-1)%3==0)
    {
        cout<<"First"<<endl;
    }
     else
    {
        cout<<"Second"<<endl;
    }
    }
    return 0;
}