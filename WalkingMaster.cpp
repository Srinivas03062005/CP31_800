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
	int a,b,c,d,count=0; cin>>a>>b>>c>>d;
	if(b>d)
	{
		cout<<-1<<endl;
	}
	else
	{
	while(b!=d)
	{
		count++;
		b++;
		a++;
	}
	//cout<<a<<" "<<b<<" "<<c<<" "<<d;
	if(a>=c)
	{
	while(a!=c)
    {
    	count++;
    	a--;
	}
	cout<<count<<endl;
	//cout<<a<<" "<<b<<" "<<c<<" "<<d;
    }
    else
    {
    	cout<<-1<<endl;
	
	}
    }
    }
	return 0;
}