#include <bits/stdc++.h>
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a, b) for (int i = (a); i >= (b); i--)
#define printyes cout << "YES\n";
#define printno cout << "NO\n";
#define space " "
using namespace std;
const int N = 1e7 + 10;
#define int long long int
#define vl vector<int>
#define MOD 1000000007
#define INF LLONG_MAX
#define pii pair<int, int>
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &vi : v)
    {
        in >> vi;
    }
    return in;
}
void solve()
{
    int n;
    cin >> n;
    vl v(n);
    rep(i,0,n){
        int x;cin>>x;
        if(x<0)v[i] = -x;
        else v[i] = x;
    }
    sort(v.begin(), v.end());
    int answer = 0;
    rep(i, 0, n)
    {
        int xd = 2 * v[i];
        int x = upper_bound(v.begin(), v.end(), xd) - v.begin() - 1;
        answer += x - i;
    }
    cout << answer << endl;
}
signed main()
{
    fastIO;
    solve();
    return 0;
}