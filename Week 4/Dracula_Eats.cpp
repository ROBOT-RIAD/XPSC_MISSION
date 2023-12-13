#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    if(n<2)
	    {
	        count=0;
	    }
	    else
	    {
	        int d=n-2;
	        count=1;
	        if(d>6)
	        {
	            int ans=d/7;
	            count+=ans;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
