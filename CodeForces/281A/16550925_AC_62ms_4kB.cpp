#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,l;
    char c;

    string str,s;
    cin >> str;
    c = str[0];
    c = toupper(c);
     cout << c;

    for (int i=1; i<str.size(); i++ )
    {
        cout << str[i];
    }
}
