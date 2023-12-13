#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    long long int  x,y;cin>>x>>y;
	    long long int ans=ceil(y/100.0);
	    if(x>=ans)
	    {
	        cout<<0<<endl;
	    }
	    else if(x<ans)
	    {
	        cout<<ans-x<<endl;
	    }
	}
	return 0;
}
