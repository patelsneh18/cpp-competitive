#include<bits/stdc++.h>
using namespace std;

int countSpecials(int arr[], int sizeof_array, int K)
{
    int f = floor(sizeof_array/K), count = 0;
    int num = 0;
    int i = 0;
    sort(arr,arr+sizeof_array);
    while (i<sizeof_array)
    {
        for (int j = i; j < sizeof_array; j++)
        {
            if (arr[i]==arr[j]) num++;
        }
        if (num==f) count++;
        i+=num;
        num = 0;
    }
    return count;
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
    cout<<countSpecials(arr,n,2);

    return 0;
}