#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,s;cin>>k>>s;
    int count=0;
    for(int a=0;a<=k;a++)
    {
        for(int b=0;b<=k;b++)
        {
           int c=s-a-b;
           if(0<=c&&c<=k)
           {
            count++;
           }
        }
    }
    cout<<count<<endl;
    return 0;
}