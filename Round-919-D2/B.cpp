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
    int n, k, x;
    cin>>n>>k>>x;
    int a[n], b[n];
    int total=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
        cnt+=a[i];
    }
    sort(a,a+n, greater<int>());
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        b[i]=b[i-1]+a[i];
    }
    int i=0;
    int ans=-(INF);
    while(k--)
    {
        total-=a[i];
        int tt=total;
        tt-=2*(b[min(i+x, n-1)]-b[i]);

        ans=max(ans, tt);
        //cout<<ans<<endl;
        i++;

    }
    ans=max(ans, cnt-(2*b[x-1]));
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

