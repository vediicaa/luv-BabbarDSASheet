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


int sumOfMaxMin(int arr[], int n){
	int minn=*min_element(arr,arr+n);
    int maxx=*max_element(arr,arr+n);
    return maxx+minn;// Write your code here.
}