#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int XOR,cnt,val;
        cnt=0;
        int n;
        cin>>n;
        cin>>val;
        XOR=val;
        if(val==1) cnt++;
        for(int i=1;i<n; i++){
            cin>>val;
            XOR=XOR^val;
            if(val==1)
            cnt++;
        }
            if(n==cnt)
        {
        if(cnt%2==0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
        else if(XOR==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }

    return 0;
}
