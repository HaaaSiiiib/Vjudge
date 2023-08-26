#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int temp=0,ans,r,digit=0,flag,div=1; //div=divisor
    long long int s;
    cin>>s;
    while(flag>1)
    {
        digit++;
        flag=s/div;
        div=div*10;
    }
    if (s<=9)
    {
        cout<<s<<endl;
    }
    else
    {
    int n=digit-1;
    for (int i=0; i<n;i++)
    {
        r=temp+pow(10,i);
        temp=r;
    }
    ans= (s*(digit))-(9*temp);
    cout << ans;
    }

}
