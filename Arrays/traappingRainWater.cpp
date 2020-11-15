#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){
    int res = 0;
    for (int i = 1; i < n-1; i++) {
        int left = arr[i];
        for (int j=0; j<i; j++)
            left = max(left, arr[j]);
        int right = arr[i];
        for (int j=i+1; j<n; j++)
            right = max(right, arr[j]); 
        res = res + (min(left, right) - arr[i]); 
    }
    return res;
}


int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<trappingWater(arr, n)<<endl;
    return 0;    
}