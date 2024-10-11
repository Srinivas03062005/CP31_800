#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n],b[n];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=fabs(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        ans=min(ans,b[i]);
    }
    cout<<ans;
    return 0;
}