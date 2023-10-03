#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int count=0,i=0;
    while(i<n)
    {
        int t;cin>>t;
        if(t%k==0)
        {
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}