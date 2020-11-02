#include<iostream>
using namespace std;

int minNumToEven(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    if(sum%2==0)
    {
        return 2;
    }
    else
        return 1;
}
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    cout<<"To Be Added : "<<minNumToEven(arr,n);
    return 0;
}

//Given an array arr[] of size N, the task is to add the minimum number(should be greater than 0) to the array so that the sum of the array becomes even0
