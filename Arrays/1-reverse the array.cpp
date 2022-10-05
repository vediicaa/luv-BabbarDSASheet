#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define frn(i,a,b) for(ll i=a;i<b;i++)
#define fri for(auto it=mp.begin();it!=mp.end();it++)
#define its it->second 
#define itf it->first 
#define maximum *max_element
#define minimum *min_element
#define sra(a) sort(a,a+n)
#define srv(v) sort(v.begin(),v.end());

int main()
{
    ll cases;
    cin>>cases;
    while(cases--)
    {
        ll n;
	    cin>>n;
	    ll a[n];
	    frn(i,0,n)
	    cin>>a[i];
	    for(ll i=n-1;i>=0;i--)
	    cout<<a[i]<<" ";
	    cout<<"\n";
     }
}