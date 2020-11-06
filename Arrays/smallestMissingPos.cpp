#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n)
{
    int k=1;
    sort(arr,arr+n);
    for (int i = 0; i < n; ++i) {
        if(arr[i]>0&&arr[i]!=k) return k;
        else if(arr[i]>0&&(arr[i+1]-arr[i])>=1) k++;
        else continue;
    }
    return arr[n-1]+1;
}

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; ++i) cin>>arr[i];
    cout<<missingNumber(arr,n);
}
