#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
//fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
   int x,y;
   cin>>x>>y;
   int flag=0;
   ll ans=0;
   if(y%2==0)
   {
    ans=y/2;
   }
   else
   {
    ans=(y/2)+1;
    flag=1;
   }
   ll space=0;
   if(flag==0)
   {
     space=7*ans;
   }
   else
   {
    if(ans>0)
    {
     space=11;
    }
    space=space+(7*(ans-1));
   }
   
   if(x<=space)
   {
    cout<<ans<<endl;
   }
   else
   {
    x=x-space;
    if(x%15==0)
    {
        ans=ans+(x/15);
    }
    else
    {
        ans=ans+(x/15);
        ans++; 
    }
    cout<<ans<<endl;
   }
   
   //cout<<"\n";
}
   return 0;
}