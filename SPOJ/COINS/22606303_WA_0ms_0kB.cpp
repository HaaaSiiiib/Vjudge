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
        double B;
        B=floor(n/2)+floor(n/3)+floor(n/4);
        if (B>n)  cout<<B<<endl;
        else
            cout<<n<<endl;

         i--;


    }
}
