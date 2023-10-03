#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string s1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
           s1.push_back(s[i]);
        }
    }
    cout<<s1;
    return 0;
}