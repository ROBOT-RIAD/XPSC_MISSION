#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

class area_cl{
    public:
      double height;
      double width;
};

class rectangle: public area_cl{
    public:
       rectangle(double h,double w)
       {
        height=h;
        width=w;
       }

       double area()
       {
        return height*width;
       }
};

class isosceles : public area_cl{
    public:
    isosceles(double h,double w)
    {
        height=h;
        width=w;
    }
    double area()
    {
        return 0.5*height*width;
    }
};

int main() {
    rectangle rec(5.0 ,3.0);
    isosceles iso(4.0,6.0);
    cout<<rec.area()<<" "<<iso.area();    
    return 0;
}