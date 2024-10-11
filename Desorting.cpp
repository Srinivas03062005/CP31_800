#include<bits/stdc++.h>
using namespace std;
//#define int long long 
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
    int n,count=0,diff=INT_MAX,index=0,count1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i])
		{
			count++;
		}
	}
	if(count!=n-1)
	{
		cout<<0<<endl;
	}
	else if(count==n-1)
	{
	    for(int i=0;i<n-1;i++)
	    {
	     	if((a[i+1]-a[i])<diff)
	     	{
	     		diff=a[i+1]-a[i];
	     		index=i;
			}
	    }
	   // cout<<index<<endl;
	   	  for(int i=100000000;i>=100;i=i/10)
	   	  {
	   	  	  while((a[index+1]-a[index])>=i)
	   	  	  {
	   	  	  	count1=count1+(i/2);
	   	  	  	a[index]=a[index]+(i/2);
	   	  	  	a[index+1]=a[index+1]-(i/2);
			  }
		  }
	   while(a[index]<=a[index+1])
	   {
	   	  count1++;
	   	  a[index]++;
	   	  a[index+1]--;
	   }
	   cout<<count1<<endl;
	}
}
	return 0;
}