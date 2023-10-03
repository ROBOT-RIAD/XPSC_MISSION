#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;cin>>n;
    vector<long long int>v(n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if((sum-v[i])%2==0)
            {
                cout<<sum-v[i];
                break;
            }
        }
    }
    return 0;
}