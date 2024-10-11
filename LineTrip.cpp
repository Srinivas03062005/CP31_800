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
#define lb(a,v) lower_bound(a.begin(),a.end(),v)-a.begin()
#define ub(a,v) upper_bound(a.begin(),a.end(),v)-a.begin()
#define bs(a,v) binary_search(a.begin(),a.end(),v)
#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
#define fork(n) for (int k = 0; k < n; k++)
//for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
//for(map<int,int>::iterator it=mp.rbegin();it!=mp.rend();it++)

//GCD
int gcd (int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
signed main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t;
    cin>>t;
    while(t--)
    {
    int n,x,max1;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    max1=a[0];	
	for(int i=0;i<n;i++)
    {
    	if(i>0)
    		max1=max(max1,a[i]-a[i-1]);
	}
	max1=max(max1,(x-a[n-1])*2);
	cout<<max1<<endl;
    }
	return 0;
}