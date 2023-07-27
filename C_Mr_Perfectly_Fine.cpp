/**
 *    author:  MOIN46
 *          --MD:MOIN UDDIN BHUYAIN TUHIN
 *          --CSE,BRUR
 *          --Email:cse118199brur@gmail.com
 **/

#include <bits/stdc++.h>
#define endl "\n"
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int
#define loop(i, n) for (int i = 0; i < n; i++)
#define p(condition) cout << (condition ? "YES" : "NO")
#define me ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    me;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        pair<ll ,int>P_array[n];

        for(int i=0;i<n;i++)
        {
            cin>>P_array[i].first>>P_array[i].second;
        }

        sort(P_array,P_array+n);

        ll ans=0;
        ll ans1=10000000;
        int flag=1,flag1=1,flag2=0;

        for(int i=0;i<n;i++)
        {
            if(P_array[i].second==11)
            {
                ans1=min(P_array[i].first,ans1);
                flag2=1;
                //break;
            }
            else if(P_array[i].second==10&&flag)
            {
                ans+=P_array[i].first;
                flag=0;
            }
            else if(P_array[i].second==1&&flag1)
            {
                ans+=P_array[i].first;
                flag1=0;
            }
        }
        if((flag==0&&flag1==0)&&flag2==1)
        cout<<min(ans,ans1)<<endl;
        else if(flag==0&&flag1==0)
        cout<<ans<<endl;
        else if(flag2==1)
        cout<<ans1<<endl;
        else
        cout<<"-1\n";
    }


}