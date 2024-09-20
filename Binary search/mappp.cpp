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
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  map<char,int>mp;
  for(int i=0;i<str.size();i++)
  {
   mp[str[i]]++;
  }
  string temp;
  for(auto it : mp)
  {
    temp=temp+it.first;
  }
   map<char,char>mp1;
  int size=temp.size();
  for(int i=0;i<temp.size();i++)
  {
  mp1[temp[i]]=temp[size-1];
  size--;
  }

  for(int i=0;i<str.size();i++)
  {
    cout<<mp1[str[i]];
  }
  cout<<endl;
  
}
   return 0;
}