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
#define vp vector<pi>
#define mk make_pair
#define ff first
#define ss second
//set
#define si set<int>
#define sit set<int>::iterator 
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
fast;
int n,p;cin>>n>>p;
int price[n];
fr(i,0,n)
{
	cin>>price[i];
}
vp v;
int x;
fr(i,0,n)
{
	cin>>x;
	v.pb(mk(price[i],x));
}
sort(all(v));
int dp[n+1][p+1]={0};
fr(i,1,n+1)
{
	fr(j,1,p+1)
	{
		if(j-v[i-1].ff>=0)
		{
			int t=j-v[i-1].ff;
			dp[i][j]=max(dp[i-1][j],v[i-1].ss + dp[i-1][t]);
		}
	}
}
cout<<dp[n][n];
return 0;
}
