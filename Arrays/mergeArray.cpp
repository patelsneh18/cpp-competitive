#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int minindex1;
    int minindex2;
    for (int i = 0; i < (m+n); i++)
    {
        int min1=arr1[i];
        int min2=arr2[i];
        for (int j = i; j < (n+m); j++)
        {
            if(j<=n){
                int prevMin = min1;
                min1 = min(min1,arr1[j]);
                if(prevMin != min1) minindex1 = j;
            }
            else{
                int prevMin = min2;
                min2 = min(min2,arr2[j-n]);
                if(prevMin != min2) minindex2 = j-n;
            }  
        }
        if (i<=n)
            {
                if(min2<min1){
                    int temp = arr1[i];
                    arr1[i] = arr2[minindex2];
                    arr2[minindex2] = temp;
                }
                else{
                    int temp = arr1[i];
                    arr1[i] = arr1[minindex2];
                    arr1[minindex2] = temp;
                } 
            }
            else
            {
                int temp = arr2[i];
                arr2[i] = arr2[minindex2];
                arr2[minindex2] = temp;
            } 
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    merge(arr1,arr2,4,5);
    for (int i = 0; i < 4; i++) cout<<arr1[i]<<" ";
    cout<<endl;
    for (int i = 0; i < 5; i++) cout<<arr2[i]<<" ";
    return 0;
}