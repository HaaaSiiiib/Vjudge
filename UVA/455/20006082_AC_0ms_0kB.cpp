#include <bits/stdc++.h>

#define ll long long
#define mx MAX_INT
#define mn MIN_INT
#define yo cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define ppb pop_back
#define chk cout<<"That's it!"<<endl

using namespace std;


int main()
{
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        string ss;
        string s1;
        cin>>s;
        ll sl, s1l;
        for( int j=1; j<=(s.size()); j++)
        {
            ss="";
            s1=s.substr(0,j);
            s1l=s1.size();
            sl=s.size();
            for(int k=1;k<=(s.size()/s1.size());k++)
            {
                ss+=s1;
            }
            if(ss==s)
            {
                cout<<s1l<<endl;
                break;
            }
        }
        if (tc)
            cout<<endl;

    }
}
