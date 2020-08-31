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
int minstep(int n)
{
	int dp[n+1]={0};
	fr(i,1,n+1)
	{
		int t=0,temp=i;
		while(temp>0)
		{
			t=max(t,temp%10);
			temp/=10;
		}
		dp[i]=dp[i-t]+1;
	}
	return dp[n];
}
int main()
{
fast;
int n;cin>>n;
cout<<minstep(n);
return 0;
}
