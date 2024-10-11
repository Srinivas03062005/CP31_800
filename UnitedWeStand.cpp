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
	int n,even=0,odd=0;
	cin>>n;
	int a[n];
	vi v,e,o;
	si s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		v.pb(a[i]);
		s.insert(a[i]);
		if(a[i]%2==0)
		{
			even++;
			e.pb(a[i]);
		}
		else
		{
			odd++;
			o.pb(a[i]);
		}
	}
	if(s.size()==1)
	{
		cout<<-1<<endl;
	}
	else
	{
	so(v);
	so(e);
	so(o);
	if(even==0)
	{
		int count=0;
		int mx=o[o.size()-1];
		//cout<<mx<<endl;
		for(int i=o.size()-1;i>=0;i--)
		{
			if(o[i]==mx)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		cout<<n-count<<" "<<count<<endl;
		for(int i=0;i<n-count;i++)
		{
			cout<<o[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++)
		{
			cout<<mx<<" ";
		}
		cout<<endl;
	}
	else if(odd==0)
	{
		int count=0;
		int mx=e[e.size()-1];
		//cout<<mx<<endl;
		for(int i=e.size()-1;i>=0;i--)
		{
			if(e[i]==mx)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		cout<<n-count<<" "<<count<<endl;
		for(int i=0;i<n-count;i++)
		{
			cout<<e[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++)
		{
			cout<<mx<<" ";
		}
		cout<<endl;
	}
	else
	{
		int count=0;
		int mx=v[v.size()-1];
		//cout<<mx<<endl;
		for(int i=v.size()-1;i>=0;i--)
		{
			if(v[i]==mx)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		cout<<n-count<<" "<<count<<endl;
		for(int i=0;i<n-count;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<count;i++)
		{
			cout<<mx<<" ";
		}
		cout<<endl;
	}
    }
   }
	return 0;
}