#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define yes1 cout<<"Yes"<<endl
#define no1 cout<<"No"<<endl
#define vll vector<long long>
#define mii map<int,int>
#define si set<int>
#define pb push_back
#define ppb pop_back
#define sp " "
#define PI 3.1415926535897932384626433832795
#define eb emplace_back
#define mp make_pair
#define mx(a) *max_element(a.begin(),a.end())
#define mn(a) *min_element(a.begin(),a.end())
#define so(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
#define rso(a) sort(a.rbegin(),a.rend())
#define sumall(a) accumulate(a.begin(),a.end(),0)
//GCD
int gcd (int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n,k,found=0;
    cin>>n>>k;
    int a[n];
    si s;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	s.insert(a[i]);
	}
	if(s.size()==1)
	{
		yes;
	}
	else if(s.size()>1 && k==1)
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]<a[i])
			{
				no;
				found=1;
				break;
			}
		}
		if(found==0)
		{
			yes;
		}
	}
	else if(s.size()>1 && k==1)
	{
		no;
	}
	else
	{
		yes;
	}
}
	return 0;
}