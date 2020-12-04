#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 84;
    int k = 131;
    // cin>>n;
    // cin>>k;
    int count = 0;
    int arr[] = {78 ,16, 94, 36, 87, 93, 50, 22, 63, 28, 91, 60, 64, 27, 41, 27, 73, 37, 12, 69, 68, 30, 83, 31, 63, 24 ,68, 36, 30, 3, 23, 59, 70, 68, 94, 57, 12, 43, 30, 74, 22, 20, 85, 38, 99, 25, 16, 71, 14, 27, 92, 81, 57, 74, 63, 71, 97, 82, 6, 26, 85, 28, 37, 6, 47, 30, 14, 58, 25, 96, 83, 46, 15, 68, 35, 65, 44, 51, 88, 9, 77, 79, 89, 85};
   // for (int i = 0; i < n; i++) cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {
            product = product * arr[j];
            if(product<0) break;
            if (product < k) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}