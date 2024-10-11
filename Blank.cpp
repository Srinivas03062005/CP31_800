#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
#define vi vector<int>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define yes1 cout<<"Yes"<<endl
#define no1 cout<<"No"<<endl
#define vll vector<long long>
#define mii map<int,int>
#define si set<int>
#define pb push_back
#define sp " "
#define PI 3.1415926535897932384626433832795
#define eb emplace_back
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=1;
    vi v;
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
        else
        {
           v.pb(count);
           count=0;
        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    }
    return 0;
}