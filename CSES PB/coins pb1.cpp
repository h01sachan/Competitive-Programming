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
int n,x;cin>>n>>x;
int coin[n];
fr(i,0,n)
{
	cin>>coin[i];
}
sort(coin,coin+n);
ll dp[x+1]={0};
dp[0]=1;
fr(i,1,x+1)
{
	ll ans=0;
	fr(j,0,n)
	{
		if(i-coin[j]>=0)
		{
			dp[i]=(dp[i]+dp[ i-coin[j]])%mod;
		}
	}
	
}
cout<<dp[x];
return 0;
}
