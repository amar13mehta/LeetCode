#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, a, b) for (long long i = a; i >= b; i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vll vector<long long>
#define vvl vector<vll>
#define pll pair<ll, ll>
#define vc vector
#define fi first
#define se second
#define all(x) x.begin(), x.end()
long long Ceil(long long a, long long b)
{
    return (a + b - 1) / b;
}


int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        ll n, x, y; cin >> n >> x >> y;vll a(n);
        f(i, 0, n){
                cin >>a[i];} ll let = 0;
        if (x <= y)
        {
            ll ch = *max_element(all(a));
            if (ch <= 0){
                cout << 0 << endl;}
            else{
                cout << Ceil(ch, y) << endl;}
        }
        else
        {
            f(i, 0, n)
                {a[i] = max(a[i], 0ll);}
            ll r = 0;
            rf(i, n - 1, 0)
            {
                a[i] -= r;
                a[i] = max(a[i], 0ll);
                ll k = Ceil(a[i], x);
                r += y * k;
                let += k;
            }cout << let << endl;
        }
    }
    return 0;
}