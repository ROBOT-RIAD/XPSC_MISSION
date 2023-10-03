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
        int n,m;
        cin>>n>>m;
        if(n%m==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int count =0;
            while(n!=m)
            {
                (n==m)?n++:n--;
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}