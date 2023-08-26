#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double n,m,a;
    long long int ans;
    double p,q,r,s;
    cin>>n>>m>>a;
    p=n/a;
    q=m/a;
    r=ceil(p);
    s=ceil(q);
    ans= r*s;

    cout<<ans<< endl;
}
