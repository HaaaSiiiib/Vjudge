#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, n1, n2, n3, f=0, g = 0 ;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> n1 >> n2 >> n3;

        if (n1==1)
        {
           g++;
        }

        if (n2==1)
        {
            g++;
        }
        if (n3 == 1)
        {
            g++;
        }
        if (g>=2)
        {
            f++;
        }

        g = 0;
    }

        cout << f;
}
