#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n;n=s.size();
        string s1="";
        for(int i=0;i<100;i++)
        {
            s1+="Yes";
        }
        bool flag=false;
        for(int i=0;i<s1.size();i++)
        {
            if(i+n-1<s1.size()&&s1.substr(i,n)==s)
            {
                flag=true;
                break;
            }
        }
        if(flag)
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
