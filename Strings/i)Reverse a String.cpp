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

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int>sd;
        for(int i=0;i<s.size();i++)
        {
            sd.push(s[i]);
        }
       int i=0;
        while(!sd.empty())
       {
           s[i]=sd.top();
            sd.pop();
            i++;
       }
    }
};