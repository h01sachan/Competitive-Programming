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
vi dp;
int x;cin>>x;
dp.pb(x);
fr(i,1,n)
{
	cin>>x;
	auto it=lower_bound(dp.begin(),dp.end(),x);
	if(it==dp.end()) // all elements smaller in dp
	{
		dp.pb(x);
	}
	else
	{
		*it=x; // change value pointing by it to min ie current x
	}
}
cout<<dp.size();
return 0;
}
