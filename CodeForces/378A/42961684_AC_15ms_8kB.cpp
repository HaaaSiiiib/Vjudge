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
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, aflag =0, bflag=0, drawflag=0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
            if (abs(a - i) < abs(b - i))
            {
                    aflag++;
            }
            if (abs(a - i) > abs(b - i))
            {
                    bflag++;
            }
            if (abs(a - i) == abs(b - i))
            {
                    drawflag++;
            }
    }
    cout << aflag << " " << drawflag << " " << bflag << endl;

    return 0;
}