#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define  optimization() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int a,b,c;

long long int getfn(int x)
{
    long long int res=(a*x*x)+(b*x)+c;
    return res;
}


 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         long long int k,ans;

         cin>>a>>b>>c>>k;
         int lf=0,rf=1e6;
         while(lf<=rf)
         {
             int mid=(lf+rf)/2;

             if(getfn(mid)>=k)
             {
                 ans=mid;
                 rf=mid-1;

             }else{

             lf=mid+1;

             }
         }
         cout<<ans<<endl;


     }
     return 0;

 }
