#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}

int main() {
    int n;cin>>n;
    int a,b,c;
    int sum=0;
    ffo(a,1,n)
    {
        ffo(b,1,n)
        {
            ffo(c,1,n)
            {
               sum+=gcd(gcd(a,b),c);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}