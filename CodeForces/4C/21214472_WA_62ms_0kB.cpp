#include <bits/stdc++.h>

#define ll long long
#define mx MAX_INT
#define mn MIN_INT
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define ppb pop_back
#define r0 return 0
#define chk cout<<"Yo bitch!!"<<endl

using namespace std;


int main()
{
    string s;
    vector <string> db;
    db.pb("   ");
    ll tc, suf=1;
    vector <int> ager;
    ager.pb(0);
    cin>>tc;
    for (int i=0; i<tc; i++)
    {
        cin>>s;
        int ff=0;
        for (int j=0; j<db.size(); j++)
        {
            int flag=0;
            if (db[j]==s)
            {
                for (int k=0; k<ager.size(); k++)
                {
                    if (j==ager[k])
                    {
                        cout << s << suf <<endl;
                        suf++;
                        j++;
                        break;
                    }
                    else
                    {
                        flag++;
                        ager.pb(j);
                    }
                }
                if (flag==ager.size())
                    cout<<s<<"1"<<endl;
                    break;

            }
            else
            {
                ff++;
                continue;
            }

        }if (ff==db.size())
        cout<< "OK"<<endl;

        db.pb(s);
    }

}

