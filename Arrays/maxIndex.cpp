#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n) 
{ 
    int diff = 0;
    int best = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = n-1; j >= 0; j--)
        {
            if(arr[i]<=arr[j])
            {
                diff = j-i;
                best = max(best,diff);
            }
        }
    }
    return best;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<maxIndexDiff(arr,n);
    return 0;
}