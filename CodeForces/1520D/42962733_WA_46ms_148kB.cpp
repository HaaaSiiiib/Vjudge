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

int f(int n)
{
        if (n == 0)
                return 1;
        int res = 1;
        for (int i = 2; i <= n; i++)
                res = res * i;
        return res;
}

int nCr(int n, int r)
{
        return f(n) / (f(r) * f(n - r));
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
                V v, allK;
                S sK;
                v.push_back(0);
                int n, flag=0;
                cin >> n;
                for (int i = 0; i<n; i++){
                        int a;
                        cin >> a;
                        v.push_back(a);
                }
                for (int i = 1; i <= n; i++){
                        // for (int j = i + 1; j <= n; j++)
                        //         if (v[j]-v[i] == j-i){
                        //                 flag++;
                        //         }

                        int k = v[i] - i;
                        allK.push_back(k);
                        sK.insert(k);
                }
                flag = allK.size()-sK.size()+1;
                //cout << allK.size() << " " << sK.size() << endl;
                if (flag == 1)
                {
                        cout << "0" << endl;
                }
                else {
                        cout << nCr(flag, 2) << endl;
                }

    }

    return 0;
}