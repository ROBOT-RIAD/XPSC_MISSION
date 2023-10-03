#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=n;i++)
        {
            int d=v[i]-i;
            if(d!=0)
            {
                cout<<i;
                break;
            }
        }
    return 0;
}