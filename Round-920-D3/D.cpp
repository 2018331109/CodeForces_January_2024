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
     int m;
     cin>>n>>m;
     int l=0, r=m-1;
     int a[n], b[m];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<m;i++)
     {
         cin>>b[i];
     }
     sort(a, a+n);
     sort(b, b+m);
     int ans=0;
     int s=0, e=n-1;
     while(s<=e)
     {
         int a1=abs(a[s]-b[l]);
         int a2=abs(a[s]-b[r]);
         int b1=abs(a[e]-b[l]);
         int b2=abs(a[e]-b[r]);
         if(a1>=a2 && a1>=b1 && a1>=b2)
         {
             s++, l++;
             ans+=a1;
         }
         else if(a2>=a1 && a2>=b1 && a2>=b2)
         {
             s++, r--;
             ans+=a2;
         }
         else if(b1>=a1 && b1>=a2 && b1>=b2)
         {
             e--, l++;
             ans+=b1;
         }
         else
         {
             e--, r--;
             ans+=b2;
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

