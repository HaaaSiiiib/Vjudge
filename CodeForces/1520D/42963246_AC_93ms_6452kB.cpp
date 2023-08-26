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

    int t;
    cin >> t;
    while(t--){
                ll n;
                MPii all_ind;
                ll flag = 0;
                cin >> n;
               
                for (int i = 0; i < n; i++)
                {
                        int a;
                        cin >> a;
                        a -= i;
                        flag += all_ind[a];
                        //cout << all_ind.size() << endl;

                        all_ind[a]++;
                }
                cout << flag << endl;
    }

    return 0;
}