//sublime 
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
	/*#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
	#endif*/
	fast;
	int n;cin>>n;
	int a[n],sum=0;
	fr(i,0,n) 
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	int dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));
	fr(i,1,n+1)
	{
		fr(j,1,sum+1)
		{
			if(j-a[i-1]>=0)
			{
				if(a[i-1]==j || dp[i-1][j-a[i-1]]==1) dp[i][j]=1;
				else dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	int ans=0;
	fr(i,1,sum+1)
	{
		if(dp[n][i]) ans++;
	}
	cout<<ans<<endl;
	fr(i,1,sum+1)
	{
		if(dp[n][i]) cout<<i<<" ";
	}


return 0;
}
