#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>v;
    v.pb(1), v.pb(n);
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.pb(i);
            if(i!=(n/i))
            {
                v.pb(n/i);
            }
        }
    }
    int ans=1;
    sort(v.begin(), v.end());
    for(auto it:v)
    {
        if(n/it>=k)
        {
            int rm=n-(k*it);
            if(rm%it==0)
            {
                ans=max(ans, it);
            }
        }
    }

    cout<<ans<<endl;
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

