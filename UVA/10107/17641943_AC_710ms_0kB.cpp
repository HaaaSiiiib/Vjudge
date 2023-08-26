#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,x,M;
    vector <int> v;
    while(cin>>x)
    {
        v.push_back(x);
        n=v.size();
        sort(v.begin(), v.end());
        if (v.size()==1)
            cout <<v[0]<<endl;
        else if (v.size()%2==0)
        {
            M=(v[n/2]+v[(n/2)-1])/2;
            cout<<M<<endl;
            continue;
        }
        else
        {
            M=(v[n/2]);
            cout<<M<<endl;
            continue;
        }
    }

}
