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
    ll slen,s2len,tc;
    string str,substr1;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        ll c=0;
        cin>>str;
        slen = str.length();
        cin>>substr1;
        s2len =substr1.length();

        for(int j=0; j<slen; j++)
        {
            if(str.compare(j,s2len,substr1)==0)
                c++;
            //cout<< c <<endl;
        }
        cout<<"Case "<<i<<":"<< " "<<c<< endl;
    }
}

