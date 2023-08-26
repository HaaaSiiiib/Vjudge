#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, n1, n2, n3, flag=0, gonona = 0 ;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> n1 >> n2 >> n3;

        if (n1==1)
        {
           gonona++;
        }

        if (n2==1)
        {
            gonona++;
        }
        if (n3 == 1)
        {
            gonona ++;
        }
        if (gonona >=2)
        {
            flag++;
        }

        gonona = 0;
    }

        cout << flag;
}
