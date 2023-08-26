#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rt return

using namespace std;


int main ()
{
   int val, XOR, cnt=0;
   int tc;
   cin>>tc;
   for (int k=0; k<tc; k++){
   int n;
   cin >>n;
//   cin>>val;
//   XOR= val;
//if (val==1) cnt++;
   for (int i=0;i<n;i++){
    cin>>val;
    XOR= XOR^val;
    if (val==1) cnt++;
   }


   if (n==cnt)
   {
       if (cnt%2==0)
        cout << "FIRST"<<endl;
       else
        cout <<"SECOND"<<endl;

   }
   else if (XOR ==0)
    cout <<"SECOND"<<endl;
   else
    cout <<"FIRST"<<endl;
   }
   return 0;
}
