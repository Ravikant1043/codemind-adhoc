#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>m;
    int pt;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        m[t]++;
    }
    cin>>pt;
    vector<pair<int,int>>v;
    for(auto &it:m){
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int p=v.size();
    for(int i=0;i<min(pt,p);i++)cout<<v[i].second<<" ";
}