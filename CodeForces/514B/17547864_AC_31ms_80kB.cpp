#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long double n, x0,y0,x,y, flag=0;
    long double m;
    cin >>n>>x0>>y0;
    set<long double>s;

    for (int i=0;i<n;i++)
    {
       cin>>x>>y;
       if (x!=x0){
        m=(y-y0)/(x-x0);
       s.insert(m);
       }
       else
       flag=1;

    }
    cout<<s.size() +flag<<endl;
}
