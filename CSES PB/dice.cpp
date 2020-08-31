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
using namespace std;
#define mod 1000000007
int main()
{
fast;
ll n;cin>>n;
ll dp[n+1]={0};
dp[0]=1;
ll sum=0;
fr(i,1,n+1)
{
	if(i>0)
	{
		dp[i]=(dp[i]+dp[i-1])%mod;
	}
	if(i>1)
	{
		dp[i]=(dp[i]+dp[i-2])%mod;
	}
	if(i>2)
	{
		dp[i]=(dp[i]+dp[i-3])%mod;
	}
	if(i>3)
	{
		dp[i]=(dp[i]+dp[i-4])%mod;
	}
	if(i>4)
	{
		dp[i]=(dp[i]+dp[i-5])%mod;
	}
	if(i>5)
	{
		dp[i]=(dp[i]+dp[i-6])%mod;
	}
}
cout<<dp[n];
return 0;
}
