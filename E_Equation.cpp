#include <bits/stdc++.h>
using namespace std;
double c;
bool good(double m)
{
   double ans=(m*m)+sqrtl(m);
   return ans>=c;
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cin>>c;



cout<<setprecision(20);
 double h=c; double l=0;
for(int i=0;i<59;i++)
{
    double m=(h+l)/2;
    if(good(m))
    h=m;
    else 
    l=m;

}
cout<<h<<"\n";
return 0;
}