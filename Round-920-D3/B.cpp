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
     string a, b;
     cin>>a>>b;
     if(a==b)
     {
         cout<<0<<endl;
         return;
     }

     int d=0;
     int cnt1=0, cnt2=0, ex=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]=='1')
         {
             cnt1++;
             //if(b[i]=='0')
         }
         if(b[i]=='1')
         {
             cnt2++;
             if(a[i]=='0')
             {
                 d++;
             }
         }
     }
     if(cnt1==cnt2)
     {
         cout<<d<<endl;
     }
     else if(cnt2>cnt1)
     {
         int ans=cnt2-cnt1;
         ans+=d-ans;
         cout<<ans<<endl;
     }
     else
     {
         int ans=cnt1-cnt2;
         ans+=d;
         cout<<ans<<endl;
     }
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

