#include <iostream>
using namespace std;

int minValueToBalance(int a[], int n)
{
    int sum1=0;
    int sum2=0;
    int diff;
    for(int i=0; i<n/2; i++)
    {
        sum1 +=a[i];
    }
    for(int i=n/2; i<n; i++)
    {
        sum2+=a[i];
    }
    if(sum1>sum2){
        diff = sum1-sum2;
    }
    else if(sum1<sum2){
        diff = sum2-sum1;
    }
    else{
        diff = 0;
    }
    return diff;
}

int main()
{
    int n;
    cout<<"Enter the size(even)"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout<<"Min to Add is:"<<minValueToBalance(arr,n)<<endl;
}

//Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced.
// An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.