#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fr(i,a,b) for(ll i=a;i<b;i++)
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
ll n,m;cin>>n>>m;
ll c[n]; // coins 
fr(i,0,n)
{
    cin>>c[i];
}
ll dp[m+1]={0};
// base case dp[0]=1;
dp[0]=1;
fr(i,0,n)
{
    fr(j,c[i],m+1)
    {
        dp[j]=(dp[j]+dp[j-c[i]])%mod;
    }
}
cout<<dp[m];
return 0;
}

