// array sorted in decending order
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
void binarysearch(int arr[],int n,int key)
{
    sort(arr, arr + n, greater<int>());
    int left=0,right=n-1;
    while(left<=right)
    {
       int mid=left+(right-left)/2;//to escape from overflow
        if(arr[mid]==key)
        {
            cout<<mid<<endl;
            break;
        }
        else if(key>arr[mid])
        {
            right=mid-1;
        }
        else
        {
           left=mid+1;
        }
    }
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
    binarysearch(arr,n,key);
   return 0;
}