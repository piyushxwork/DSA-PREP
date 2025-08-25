#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,mid,low,high,key;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]==key)
        {
            cout<<"Element found at index: "<<mid;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    if(low>high)
    {
        cout<<"Element not found";
    }
    return 0;
}