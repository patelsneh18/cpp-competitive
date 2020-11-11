#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n)
{
    int maxi=0;
    int dist=0;
    for(int i = 0; i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j]) {
                    dist = j-i;
                    maxi = max(maxi,dist);
                    continue;
                }
            }
        }
        
    return maxi;
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
    cout<<maxDistance(arr,n);
}