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
        string s;cin>>s;
        string s2;cin>>s2;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G')s[i]='B';
            if(s2[i]=='G')s2[i]='B';
        }
        if(s==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}