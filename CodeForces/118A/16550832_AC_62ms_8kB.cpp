#include<bits/stdc++.h>

using namespace std;

int  main ()
{
    int l;
    char c;
    string str;
    cin >> str;
    l=str.size();
    for (int i=0 ; i<l; i++)
    {
        c= str[i];
        c= tolower(c);
       if ((c == 'a') ||
           (c == 'e') ||
           (c == 'i') ||
           (c == 'o') ||
           (c == 'u') ||
           (c == 'y'))
           {
               continue;
           }
           else if (c == '\0') {
            break;
        }
        else
            {
             cout << "." << c ;
            }

        }
    }
