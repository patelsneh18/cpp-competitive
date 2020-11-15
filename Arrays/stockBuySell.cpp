#include <bits/stdc++.h>
using namespace std;

void stock(int arr[], int n)
{
    vector<int> maxima;
    vector<int> minima;
    int i=0;
    int count = 0;
    while(i<n-1){
        while (i<n-1&&arr[i]>arr[i+1]) i++;
        minima[count] = i++;
        if(i==n-1) break;
        while(i<n&&arr[i]>=arr[i-1]) i++;
        maxima[count] = i-1;
        count++;
    }
    for (int j = 0; j < count; j++) cout<<"("<<minima[i]<<","<<maxima[i]<<")"<<" "; 
}
int main()
{
    int arr[] = {4,2,2,2,4};
    stock(arr,5);
    return 0;
}