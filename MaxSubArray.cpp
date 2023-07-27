/**
 *    author:  MOIN46
 *          --MD:MOIN UDDIN BHUYAIN TUHIN
 *          --CSE,BRUR
 *          --Email:cse118199brur@gmail.com
 **/

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vec vector<int>
#define sp " "
#define el "\n"
#define SQ(a) a*a
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int
#define loop(i, n) for (int i = 0; i < n; i++)
#define p(condition) cout << (condition ? "YES" : "NO")
#define me ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void subArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
               cout<<a[k]<<" ";

               cout<<endl;
        }
        cout<<endl;
    }
}

void subArraySum(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
               sum+=a[k];

               cout<<sum<<endl;
               sum=0;
        }
        cout<<endl;
    }
}


int maxSumSubArray(int a[],int n)
{
    int maxSum=0;
    int curSum=0;

    for(int i=0;i<n;i++)
    {
        curSum+=a[i];

        if(curSum>maxSum)
            maxSum=curSum;
        if(curSum<0)
            curSum=0;
        
    }

    return maxSum;
   
}
int main()
{
    me;
   
    
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        subArray(a,n);
        subArraySum(a,n);
        int ans=maxSumSubArray(a,n);

        cout<<ans<<endl;


}