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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        auto mn=min_element(v.begin(),v.end());
        int sum=0;
        for(int dd:v)
        {
            sum+=(dd-*mn);
        }
        cout<<sum<<endl;
    }
    return 0;
}