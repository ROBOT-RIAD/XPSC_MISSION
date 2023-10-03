#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;cin>>n>>m>>k;
    int i=1;
    while(true)
    {
        int a=k*i;
        if(a>=n&&a<=m)
        {
            cout<<a;
            break;
        }
        else if(a>m)
        {
            cout<<-1;
            break;
        }
        i++;
    }
    return 0;
}