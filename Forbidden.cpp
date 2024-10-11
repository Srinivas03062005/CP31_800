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
//BINARY EXPONENTIATION
int binaryexponentiation(int base,int n)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=result*base;
			n--;
		}
		else
		{
			base=base*base;
			n=n/2;
		}
	}
	return result;
}
//MODULAR EXPONENTIATION
int modularexponentiation(int base,int n,int primenumber)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%primenumber;
			n--;
		}
		else
		{
			base=(base*base)%primenumber;
			n=n/2;
		}
	}
	return result;
}
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,x;
	cin>>n>>k>>x;
	if(x!=1)
	{
		yes;
		cout<<n<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<1<<" ";
		}
		cout<<endl;
	}
	else
    {
    	if(n%2==0 && k>=2)
    	{
    	    yes;
			cout<<n/2<<endl;
			for(int i=0;i<n/2;i++)
			{
				cout<<2<<" ";
			}	
			cout<<endl;
		}
    	else if(k>=3)
    	{
    	int count=0;
        yes;
    	vi v;
    	v.pb(3);
    	count++;
    	n=n-3;
    	while(n>0)
    	{
    		v.pb(2);
    		n=n-2;
    		count++;
		}
		cout<<count<<endl;
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	    }
	    else
	    {
	    	no;
		}
	}
}
	return 0;
}