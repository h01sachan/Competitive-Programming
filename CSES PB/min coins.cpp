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
int main()
{
fast;
int n,x;cin>>n>>x;
int a[n];
fr(i,0,n)
{
	cin>>a[i];
}
int dp[x+1]={0},ans=INT_MAX;
sort(a,a+n);
fr(i,a[0],x+1)
{
	int c=0;
	fr(j,0,n)
	{
		dp[a[j]]=1;
		if(i>=a[j])
		{
			int t=a[j];
			if(dp[i-t]>0)
			{
				ans=min(ans,dp[i-t]+1);
				c=1;
			}
		}
	}
	if(c) dp[i]=ans;
	ans=INT_MAX;
}
if(dp[x]==0) cout<<-1;
else cout<<dp[x];
return 0;
}
