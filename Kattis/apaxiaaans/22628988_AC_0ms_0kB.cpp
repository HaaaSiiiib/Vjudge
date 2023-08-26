#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rt return

using namespace std;
int main ()
{
    string s;
    vector<char>ss;
    cin>>s;
    s[s.size()+1]='\0';
    for (int i=0, j=1; i<s.size(), j<s.size()+1; i++, j++){
        if(s[i]!=s[j]) {
            ss.pb(s[i]);
        }
    }
    for (int i=0; i<ss.size();i++){
    cout<<ss[i];
    }
    cout<<endl;
}
