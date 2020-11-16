#include<bits/stdc++.h>
using namespace std;

int rearrange(int arr[],int n){
    int temp[n];
    int c=0;
    sort(arr,arr+n);
    int i=0;
    while (c<n)
    {
        temp[c]=arr[n-1-i];
        c++;
        temp[c]=arr[i];
        c++;
        i++;
    }
    for (int i = 0; i < n; i++) cout<<temp[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of arr: "<<endl;
    for (int i = 0; i < n; i++) cin>>arr[i];
    rearrange(arr,n);
    return 0;
}