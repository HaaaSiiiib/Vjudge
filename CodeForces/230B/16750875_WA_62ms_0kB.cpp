#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,x,flag=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> x;
        for(int j=x-1;j>1; j--)
        {
            if (x%j==0)
            {
                flag++;
            }
        }
        if(flag==1)
        {
            cout << "YES"<< endl;
        }
        else
            cout <<"NO" <<endl;
        flag=0;
    }
}
