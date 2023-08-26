#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long double n, x0,y0,x,y;
    long double m;
    cin >>n>>x0>>y0;
    set<long double>s;

    for (int i=0;i<n;i++)
    {
       cin>>x>>y;
       m=(y-y0)/(x-x0);
       s.insert(m);
    }
    cout<<s.size()<<endl;
}
