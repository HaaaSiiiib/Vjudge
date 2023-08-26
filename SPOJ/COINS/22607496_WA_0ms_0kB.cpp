#include<bits/stdc++.h>
#define ll long long
#define Mx 10000007
#define rt return

using namespace std;

ll maxint =Mx;
map<ll, ll> nummap;

ll exchange(ll N)
{
    if (nummap[N]!=0) rt N;

    ll a= N/2;
    ll b= N/3;
    ll c= N/4;

    rt nummap[N]= max(N, a+b+c);
}

int main()
{
    ll n;
    while(cin>>n)
    {
        cout<< exchange(n)<<endl;
    }

}
