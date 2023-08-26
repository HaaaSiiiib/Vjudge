#include<bits/stdc++.h>
#define ll long long
#define Mx 10000007

using namespace std;

int main()
{
    int i=10;

    while (i!=0){
        double n;
        cin>>n;
        double B,r;
        B=(n/2)+(n/3)+(n/4);
        r= floor(B);
        cout<<r<<endl;
        i--;
    }
}
