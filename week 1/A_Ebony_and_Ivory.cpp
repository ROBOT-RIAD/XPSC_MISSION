#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int a,b,c;cin>>a>>b>>c;
//     bool flag=false;
//     for(int i=0;i<=c/a;i++)
//     {
//         if((c-i*a)%b==0)
//         {
//            flag=true;
//            break;
//         }
//     }
//     if(flag==true)
//     {
//         cout<<"Yes"<<endl;
//     }
//     else
//     {
//         cout<<"No"<<endl;
//     }
//     return 0;
// }



int main()
{
    int a,b,c;cin>>a>>b>>c;
    int ans=0,d;
    for(int i=0;i<=c/a;i++)
    {
        d=c-(i*a);
        if(d%b==0)
        {
            ans=1;
            break;
        }
    }
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}