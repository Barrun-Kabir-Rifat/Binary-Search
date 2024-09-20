#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define md left+(right-left)/2
typedef long long int ll;
typedef unsigned long long int ull;
// if the element is available in the vector,the the element itself is ceil
 // minimum greatest value of the key is ceil;
 // the next value of the key; 
int nextalphabet(char v[],char key,int n)
{
  int left=0;
  char res;
  int right=n-1;
  while(left<=right)
  {
    int mid=left+(right-left)/2;
    if(v[mid]>key)
    {
      res=v[mid];
      right=mid-1;
    }
    else
    {
        left=mid+1;
    }
  }
  return res;
}
  
int main()
{
  int n;
  cin>>n;
 char v[n];
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  char key;
  cout<<"enter key:";
  cin>>key;
  char res=nextalphabet(v,key,n);
  cout<<res<<endl;
   return 0;
}