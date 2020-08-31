#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)
//vector
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
//pair
#define pi pair<int ,int >
#define mk make_pair
#define ff first
#define ss second
//set
#define si set<int>
#define sit set<int>::iterator 
#define mod 1000000007
using namespace std;
int main()
{
fast;
ll n;cin>>n;
char a[n][n];
fr(i,0,n)
{
	fr(j,0,n)
	{
		cin>>a[i][j];
	}
}
ll path[n][n]={0};
if(a[0][0]=='.')
{
	path[0][0]=1;
}
// first row and column
fr(i,1,n)
{
	if(a[0][i]=='.')
	{
		path[0][i]=path[0][i-1];
	}
	if(a[i][0]=='.')
	{
		path[i][0]=path[i-1][0];
	}
}
fr(i,1,n)
{
	fr(j,1,n)
	{
		if(a[i][j]=='.')
		{
			path[i][j]=(path[i][j]+path[i-1][j]+path[i][j-1])%mod;
		}
	}
}
cout<<path[n-1][n-1];
return 0;
}
