#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

map<pair<int, int>, int> memo;

int nCr(int n, int r)
{
    if (r == 0 || r == n) return 1;
    if (r == 1 || r == n - 1) return n;

    if (memo.find({n, r}) != memo.end()) return memo[ {n, r}];

    // Using Pascal's Identity: C(n, r) = C(n-1, r-1) + C(n-1, r)
    int result = nCr(n - 1, r - 1) + nCr(n - 1, r);
    memo[ {n, r}] = result;
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = 0;

    int cnt = 0;
    int pre = 0;
    for (auto it : mp)
    {
        int now = it.ss;
        if (now >= 3)
        {
            ans += nCr(now, 3ll);
            if (pre > 0)
            {
                ans += nCr(now, 2ll) * pre;
            }
        }
        else if (now == 2)
        {
            ans += pre;
        }

        pre += it.ss;
    }

    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
