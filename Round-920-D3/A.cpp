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

void solve()
{
    map<int, int>a, b;
    for(int i=0;i<4;i++)
    {
        int x, y;
        cin>>x>>y;
        a[x]++, b[y]++;

    }
    int f=0;
    int x, y;
    for(auto it:a)
    {
        if(f==0)
        {
            x=it.ff;
            f=1;
        }
        else
        {
            y=it.ff;
        }
    }
    int ans=abs(x-y);
    f=0;
    for(auto it:b)
    {
        if(f==0)
        {
            x=it.ff;
            f=1;
        }
        else
        {
            y=it.ff;
        }
    }
    ans*=abs(x-y);
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

