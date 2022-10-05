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

void sort012(int *arr, int n)
{
   //   Write your code here
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    ll i=0;
    for(int k=0;k<=3;k++)
    {
        while(mp[k]--)
        { arr[i]=k; i++;}
    }
}