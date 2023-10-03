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
        vector<int>v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int mx=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            int d=v[i]-i;
            mx=max(mx,d);
        }
        cout<<mx<<endl;
    }
    return 0;
}