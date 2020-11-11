#include<bits/stdc++.h>
using namespace std;

int convertToWave(int arr[], int n)
{
    if (n%2==0)
    {
        for (int i = 0; i < n-1; i=i+2)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }   
    } 
    else
    {
        for (int i = 0; i < n-2; i=i+2)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    } 
}

int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    convertToWave(arr,n);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}