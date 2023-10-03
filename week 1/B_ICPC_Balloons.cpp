#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin.ignore();
        cin>>s;
        vector<int>v(26);
        for(int i=0;i<26;i++)
        {
            v[i]=0;
        }
        for(char ch:s)
        {
            if(v[ch-65]==0)
            {
                v[ch-65]+=2;
            }
            else
            {
                v[ch-65]++;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
           if(v[i]>0)
           {
             sum+=v[i];
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}