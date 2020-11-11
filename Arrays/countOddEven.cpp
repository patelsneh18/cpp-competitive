#include<bits/stdc++.h>
using namespace std;

void countOddEven(int arr[], int sizeof_array)
{
    int even = 0;
    int odd = 0;
    for(int i=0;i<sizeof_array;i++)
    {
        if(arr[i]%2==0) even++;
        else odd++;
    }
   cout<<odd<<" "<<even<<endl;
}

int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    countOddEven(arr,n);
}