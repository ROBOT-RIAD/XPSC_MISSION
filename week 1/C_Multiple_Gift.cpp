#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int x,y;cin>>x>>y;
    int count=0;
    long long int ans=x;
    while(ans<=y)
    {
        long long int d=ans*2;
        if(ans<=y)
        {
            count++;
        }
        ans=d;   
    }
    cout<<count<<endl; 
    return 0;
}