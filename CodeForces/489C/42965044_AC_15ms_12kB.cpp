#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int> Pii;
typedef pair<string, int> Psi;
typedef vector<int> V;
typedef vector<string> Vs;
typedef vector<Pii> Vp;
typedef vector<V> Vv;
typedef map<int, int> MPii;
typedef map<string, int> MPsi;
typedef set<int> S;
typedef set<string> Ss;
typedef set<char> Sc;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define inf (int)1e9
#define neginf (int)-1e9
#define EPS 1e-9
#define pi 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()

bool if_S_is_bigEnough(int m, int s)
{
        if (s >= 0 && s <= 9 * m){
                return true; 
        }
        else{
                return false;
        }
}



int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, s;
    cin>>m>>s;
    stringstream ssmin, ssmax;
    ll minimum=0, maximum=0;

    string mind="", maxd="";
    int sum = s;

    for (int i = 0; i < m; i++){
                for (int j = 0; j < 10; j++){
                        if ((i > 0 || j > 0 || (m == 1 && j == 0)) && if_S_is_bigEnough(m - i - 1, sum - j))
                        {
                                mind += char('0' + j);
                                sum -= j;
                                break;
                        }
                }
    }
    ssmin << mind;
    ssmin >> minimum;
    if (minimum==0){

                if (m == 1 && s == 0)
                {
                        mind = "0";
                }
                else
                {
                        mind = "-1";
                }
    }
    cout << mind << endl;
    sum = s;
    for (int i = 0; i < m; i++)
    {
                for (int j = 9; j >= 0; j--)
                {
                        if ((i > 0 || j >0 || (m == 1 && j == 9)) && if_S_is_bigEnough(m - i - 1, sum - j))
                        {
                                maxd += char('0' + j);
                                sum -= j;
                                break;
                        }
                }
    }

    ssmax << maxd;
    ssmax >> maximum;

    if (maximum == 0)
    {
        if(m==1 && s==0){
                maxd = "0";
                cout << maxd << endl;
        }
        else{
        maxd = "-1";
        cout << maxd << endl;
        }
    }
    else if (maxd.size() < m){
                {
                        maxd += '0';
                }
                cout << maxd << endl;
    }
    else {
                cout << maxd << endl;
    }

//     if (maxd[maxd.size()-1]=='0'){
//                 maxd[maxd.size() - 2] = maxd[maxd.size()-2]-1;
//                 maxd[maxd.size() - 1] = '9';
//     }

    return 0;
}