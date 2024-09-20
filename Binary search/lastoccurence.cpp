//Last occurence of an element
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
void lastoccurence(int arr[],int n,int key)
{
    sort(arr,arr+n);
    int left=0,right=n-1;
    int res=-1;
    while(left<=right)
    {
       int mid=left+(right-left)/2; //to escape from overflow
        if(arr[mid]==key)
        {
           res=mid;
           left=mid+1;
        }
        else if(key>arr[mid])
        {
            left=mid+1;
        }                                                                                           
        else
        {
            right=mid-1;
        }
    }
    cout<<"last occurence="<<res<<endl;
}
int main()
{
    int n;
    cin>>n;
    int key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key:";
    cin>>key;
    lastoccurence(arr,n,key);
   return 0;
}