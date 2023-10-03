#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;cin>>a>>b>>c;
    long int ans1=pow(a,2)+pow(b,2);
    long int ans2=pow(c,2);
    if(ans1<ans2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}