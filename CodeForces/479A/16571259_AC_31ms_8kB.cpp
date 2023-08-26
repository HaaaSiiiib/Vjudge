#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,b,c,k,l,m,n,o,p, val=0;
    cin >>a>>b>>c;
    k=a*b*c, l=a+b+c, m=a+b*c, n=a*b+c;
    o=(a+b)*c, p=a*(b+c);
    int array[6]={k,l,m,n,o,p};

    ///never ever dare to assign array elements without the fucking 2nd bracket!!

    for(int i=0; i<6; i++)
    {
        if(array[i]>val)
        {
            val=array[i]; }
    }
    cout<<val <<endl;
}
