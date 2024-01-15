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
    int a=INT_MAX, b=INT_MAX;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<=a && x<=b)
        {
            if(a<=b)
            {
                a=x;
            }
            else
            {
                b=x;
            }
        }
        else if(x<=a)
        {
            a=x;
        }
        else if(x<=b)
        {
            b=x;
        }
        else
        {
            if(a>=b)
            {
                b=x;
                cnt++;
            }
            else
            {
                a=x;
                cnt++;
            }
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

