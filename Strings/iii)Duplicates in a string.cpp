#include <bits/stdc++.h> 
using namespace std;
vector<pair<char,int>> duplicate_char(string str, int n){
    // Write your code here.
    map<char ,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }
    vector <pair<char,int>> v;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>=2)
            v.push_back(make_pair(it->first,it->second));
    }
    return v;
}
    int main()
    {
        string s;
        cin>>s;
        int n=s.size();
        vector<pair<char,int>> v;
        v=duplicate_char(s,n);
      for(int i=0;i<v.size();i++)
      {
           cout<<v[i].first<<" "<<v[i].second<<"\n";
      }
    }
