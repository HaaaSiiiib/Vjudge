#include<bits/stdc++.h>
#define ll long long
#define Mx 10000007
#define rt return

using namespace std;

ll maxint =Mx;
map<ll, ll> nummap;

ll exchange(ll N)
{
    if (N==0||N==1)
    {
        rt N;
    }
    if (nummap[N]!=0)
    {
        rt nummap[N];
    }
    ll half= exchange(N/2);
    ll third= exchange(N/3);
    ll quart= exchange(N/4);

    rt nummap[N]= max(N, half+third+quart);
}

int main()
{
    ll n;
    while(cin>>n)
    {
        cout<< exchange(n)<<endl;
    }

}
