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
    int n, f, a, b;
    cin>>n>>f>>a>>b;
    int aa[n+1];
    aa[0]=0;
    int ans=0;
    for(int i=1; i<n+1; i++)
    {
        cin>>aa[i];
        ans+=min(b, (aa[i]-aa[i-1])*a);
        //cout<<ans<<endl;
    }
    //cout<<ans<<endl;
    if(ans<f)
    {
        yes;
        return;
    }
    no;
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

