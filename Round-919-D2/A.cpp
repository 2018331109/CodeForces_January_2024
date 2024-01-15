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

    int n;
    cin>>n;
    int boro=INT_MIN, coto=INT_MAX, somanna;
    set<int>st;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a==1)
        {
            boro=max(boro, b);
        }
        else if(a==2)
        {
            coto=min(coto, b);
        }
        else
        {
            st.insert(b);
        }

    }
    if(boro>coto)
    {
        cout<<0<<endl;
        return;
    }
    int cnt=coto-boro+1;
    for(auto it:st)
    {
        if(it>=boro && it<=coto)
        {
            cnt--;
        }
    }
    cout<<cnt<<endl;

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

